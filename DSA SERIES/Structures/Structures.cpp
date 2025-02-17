// Chapter: Structures in C++

// Introduction to Structures

// In C++, a structure (struct) is a user-defined data type that allows grouping multiple related variables of different data types under a single name. Structures help in organizing data efficiently and improve readability.

// Declaring a Structure

// A structure is defined using the struct keyword followed by the structure name and a set of variables inside curly braces {}.
// #include<iostream>
// using namespace std;
// struct Person
// {
//   string firstname;
//   string lastname;
//   int age;
//   float GPA;

//   void PrintDetails(){
//     cout<<"First name :"<<firstname<<endl;
//     cout<<"Last name :"<<lastname<<endl;
//     cout<<"Age :"<<age<<endl;
//     cout<<"GPA obtained :"<<GPA<<endl;
//   }


// };


// int main(){
// Person p1{"Tauseef","Ahmad Khan",27,3.75};

// p1.PrintDetails();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// struct Car {
//     string brand;
//     int modelYear;
// };

// int main() {
//     Car car1; // Declaring a structure variable
//     car1.brand = "Toyota";
//     car1.modelYear = 2022;
    
//     cout << "Car Brand: " << car1.brand << endl;
//     cout << "Model Year: " << car1.modelYear << endl;
//     return 0;
// }

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// 1. Using dot (.) operator
// #include<iostream>
// using namespace std;
// struct Rectangle {
//     int length;
//     int width;
// };

// int main() {
//     Rectangle r1 = {10, 5}; // Direct initialization
//     cout << "Length: " << r1.length << " Width: " << r1.width;
//     return 0;
// }

// ++++++++++++++++++++++++++++++++++++++++++
// using constructors  
// #include<iostream>
// using namespace std;
// struct Person {
//     string name;
//     int age;
    
//     Person(string n, int a) { // Constructor-like function
//         name = n;
//         age = a;
//     }
// };

// int main(){
// Person p1("Jani",27);
// cout<<"Name is :"<<p1.name<<endl;
// cout<<"Age is :"<<p1.age<<endl;
//     return 0;
// }


// ++++++++++++++++++++++++++++++++++++++++k

// Array of Structures

// We can create an array of structures to store multiple records of the same type.
// #include<iostream>
// using namespace std;
// struct Book {
//     string title;
//     int pages;
// };

// int main() {
//     Book books[3] = { {"C++ Basics", 200}, {"Data Structures", 350}, {"Algorithms", 500} };
    
//     for (int i = 0; i < 3; i++) {
//         cout << "Book: " << books[i].title << ", Pages: " << books[i].pages << endl;
//     }
//     return 0;
// }


// ++++++++++++++++++++++++++++++++++++++++=


// Pointers to Structures

// We can use pointers to access structure members.


#include<iostream>
using namespace std;
struct MyFile
{
    string FileName;
    int FileSize;
};



int main(){
MyFile F1={"PUBG",3};

MyFile *f1=&F1;
cout<<f1->FileName<<endl;
cout<<f1->FileSize<<endl;

    return 0;
}