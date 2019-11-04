
#include <iostream>
using namespace std;
struct node {
   int data;
   int data1;
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
cout<<root->data1<<" ";
    print(root->left);

    print(root->right);
    return ;

}
    int calculatesum(node * root,int data){
            if(root==NULL){
                return 0;
            }
            int left=calculatesum(root->left,data);
            int k=0;
            if(root->data>=data){
                k=root->data;
            }
            int right=calculatesum(root->right,data);
            return left+right+k;

    }
void replacenodedat(node * root,node *root1){
    if(root==NULL){
        return ;
    }
      int sum=calculatesum( root1, root->data);
    root->data1=sum;

    replacenodedat(root->left,root1);
    replacenodedat(root->right,root1);


    return ;

}
int main() {
   node * root=NULL;
   addelement(root,20);addelement(root,30);addelement(root,40);addelement(root,50);addelement(root,60);addelement(root,70);addelement(root,80);//addelement(root,9);
//cout<<calculatesum(root,8);
replacenodedat(root,root);
   print(root);

}
