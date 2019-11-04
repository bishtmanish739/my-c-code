
#include <iostream>
using namespace std;
struct node {
   int data;
   node * left;
   node * right;
   node (int data){
       this->data=data;
       left=NULL;
       right=NULL;

   }


};

void  addelement(node * &root, int data){

    if(root==NULL){
        root= new node (data);
        return ;
    }
    node * it=root;
    node * prev=NULL;
      while(it){
        prev = it;
        if(it->data > data){
            it = it->left;
        }else{
            it = it->right;
        }
    }
    if(prev->data > data){
        prev->left = new node(data);
    }else{
        prev->right = new node(data);
    }
    return;


}
void print(node * root){
    if(root==NULL){
        return ;
    }

    print(root->left);
   cout<<root->data<<" ";
    print(root->right);
    return ;

}
int main() {
   node * root=NULL;
   addelement(root,5);addelement(root,2);addelement(root,6);addelement(root,1);addelement(root,3);addelement(root,7);addelement(root,8);addelement(root,9);

   print(root);

}
