

// Store Singly LInk List

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
head=new Node(55);
    
cout<<"Head: "<<head->data<<"->"<<head->next<<endl;
// cout<<"Next: "<<head->next<<endl;

    return 0;
}
