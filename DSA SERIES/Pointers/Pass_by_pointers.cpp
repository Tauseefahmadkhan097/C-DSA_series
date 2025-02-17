// Pass by Pointer: Jab dynamic memory ya null safety zaroori ho.
// Pass by Pointer: Jab dynamic memory ya null safety zaroori ho.

#include<iostream>
using namespace std;
int swap(int *n1,int *n2){

    int temp;
    temp=*n1;
    *n1=*n2;

    *n2=temp;
}
int main(){
int num1=2,num2=3;

cout<<"Numbers After swap \n";
cout<<"a :"<<num1<<endl;
cout<<"a :"<<num2<<endl;
swap(&num1,&num2);
cout<<"Numbers Before swap \n";
cout<<"a :"<<num1<<endl;
cout<<"a :"<<num2<<endl;
    return 0;
}