// Numbers After swap
// a :2
// a :3
// Numbers Before swap        
// a :2
// a :3
// 1. Call by Value (Qeemat se pass karna)
// Is tareeqay mein function ko variable ki copy di jati hai. Asal value change nahi hoti.

// 🔹 Kya hota hai?

// Function ek copy bana leta hai variable ki.
// Function ke andar koi bhi change asal variable ko affect nahi karta.


#include<iostream>
using namespace std;
int swap(int n1,int n2){

    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}
int main(){
int num1=2,num2=3;

cout<<"Numbers After swap \n";
cout<<"a :"<<num1<<endl;
cout<<"a :"<<num2<<endl;
swap(num1,num2);
cout<<"Numbers Before swap \n";
cout<<"a :"<<num1<<endl;
cout<<"a :"<<num2<<endl;
    return 0;
}
