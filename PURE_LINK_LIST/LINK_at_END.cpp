
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

int main(){
Node* head;
//  head=new Node(55);
head=NULL;
    
int arr[5]={53,44,22,99,2};
Node* tail=head;
for(int i=0;i<5;i++){
if(head==NULL){
    head=new Node(arr[i]);
    tail=head;
}
else{
    // Node* tail;
    tail->next=new Node(arr[i]);
    tail=tail->next;

}            
}

Node* temp=head;
while(temp){
    cout<<temp->data<<"-> ";
    temp=temp->next;
}

    return 0;
}