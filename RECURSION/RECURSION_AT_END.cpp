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

Node* create_Link_List(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    Node* temp=new Node(arr[index]);
    temp->next=create_Link_List(arr,index+1,size);
     return temp;
}

int main(){
Node *head;
head=NULL;

int arr[]={2,4,6};

head=create_Link_List(arr,0,3);

Node* temp=head;

while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
}

    return 0;
}