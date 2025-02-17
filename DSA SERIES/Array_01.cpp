// C++ Arrays
// Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

// To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:

#include<iostream>
using namespace std;

int main(){
cout<<"This is DSA series \n";

string str[5]={"Civic","Toyota","Honda","Lombargini"};
cout<<"This is First "<<str[0]<<endl;
cout<<"This is 2nd "<<str[1]<<endl;
cout<<"This is 3rd "<<str[2]<<endl;
cout<<"This is 4rth "<<str[3]<<endl;

int arr[5]={1,2,4,5};
str[0]="Khan";
cout<<"Change wala array "<<str[0]<<endl;


// n C++, an array is a variable that can store multiple values of the same type. For example,

// Suppose a class has 27 students, and we need to store all their grades. Instead of creating 27 separate variables, we can simply create an array:

int class1[27];
int mark[5] = {19, 10, 8, 17, 9};

// change 4th element to 9
mark[3] = 9;

// take input from the user
// store the value at third position
cin >> mark[2];


// take input from the user
// insert at ith position
cin >> mark[5-1];

// print first element of the array
cout << mark[0];

// print ith element of the array
// cout >> mark[2-1];

    return 0;
}