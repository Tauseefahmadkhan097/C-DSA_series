// 2. Call by Reference (Hawala se pass karna)
// Is tareeqay mein function ko asal variable ka reference diya jata hai, toh changes asal variable ko affect karte hain.

// 🔹 Kya hota hai?

// Function asal variable ka reference leta hai (& ka istemal hota hai).
// Jo bhi change function karega, asal variable pe asar parega.

#include<iostream>
using namespace std;
int swap(int &n1,int &n2){

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

 //  Yeh asal variable ko change karega
    // the output will be 
//     Numbers After swap 
// a :2
// a :3
// Numbers Before swap
// a :3
// a :2