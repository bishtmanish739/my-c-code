#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node * next;
node(int data){
this->data=data;
next=NULL;
}

};
node * createLinkList(){
    int data;
        cin>>data;
        node * head=NULL;
        if(data!=-1){
            head=new node(data);

        }
        node * tail=NULL;

        tail=head;
        tail=tail->next;

            cin>>data;
            while(data!=-1){
                tail->data=data;
                tail=tail->next;
                cin>>data;


            }
            return head;




}
void print(node * head){
while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
}

}
int main(){
node * head=createLinkList();

print(head);

return 0;
}
