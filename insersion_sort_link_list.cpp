#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;
    node(int data){
    this->data=data;
    next=NULL;
    }

};
node * createll(int n){
    node * head=NULL;
    int data;


if(n>0){
        cin>>data;
        head=new node (data);
        n--;
        node * tail=head;

        while(n>0){
            cin>>data;
            tail->next=new node (data);
            tail=tail->next;


            n--;
        }



}
return head;

}
void print(node * head){
while(head)
{
  cout<<head->data<<" ";
  head=head->next;


}
return ;
}

node * mergell(node * head1, node * head2){
    if(!head2){
        return NULL;
    }
    if(head1->data>head2->data){
        while(head1->data>head2->data&&head2){
            head2=head2->next;

        }
        node * temp=head2->next;
        head2->next=head1;
        head1->next=temp;
        delete temp;
        return head2;


    }
    else{
            head1->next=head2;
            return head1;


    }


}
node * insersionsort(node * head){

if(head==NULL){
    return NULL;


}
node * newhead=insersionsort(head->next);
head->next=NULL;

node * head1= mergell(head,newhead);
return head1;



}
int main(){

int n;
cin>>n;
node * head=createll(n);
node * newhead=insersionsort(head);
print(newhead);

}


