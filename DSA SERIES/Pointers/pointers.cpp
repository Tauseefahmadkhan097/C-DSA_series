#include<iostream>
using namespace std;

int main(){
    // In C++, pointers are variables that store the memory addresses of other variables.
     // declare variables
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    // print address of var1
    cout << "Address of var1: "<< &var1 << endl;

    // print address of var2
    cout << "Address of var2: " << &var2 << endl;

    // print address of var3
    cout << "Address of var3: " << &var3 << endl;
    // Notice that the first address differs from the second by 4 bytes, and the second address differs from the third by 4 bytes.
    // Declaration of Pointers 
    // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    int* ptr;
    int a=5;
    ptr=&a;

    cout<<"Address of The ptr "<<ptr<<endl;
    cout<<"value  of The ptr "<<*(ptr)<<endl;

    int var = 5;

// assign address of var to point_var
int* point_var = &var;

// access value pointed by point_var
cout << *point_var << endl;   // Output: 5
//address of var
cout << point_var << endl;   // Output: 5
//address of var
cout<<&var<<endl;
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Changing Value Pointed by Pointers

int price=55;
int *ptr2=&price;
*ptr2=77;
cout<<"Value Changed :"<<*ptr2<<endl;


// Example 2: Changing Value Pointed by Pointers

int cash=777;

int *ptr_i=&cash;

cout<<"Cash :"<<cash<<endl;
cout<<"Cash :"<<*ptr_i<<endl;

*ptr_i=999;
cout<<"Cash :"<<cash<<endl;
cout<<"Cash :"<<*ptr_i<<endl;
    return 0;
}