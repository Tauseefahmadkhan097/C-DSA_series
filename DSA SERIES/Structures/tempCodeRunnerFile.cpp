#include<iostream>
using namespace std;
struct Person {
    string name;
    int age;
    
    Person(string n, int a) { // Constructor-like function
        name = n;
        age = a;
    }
};

int main(){
Person p1("Jani",27);
cout<<"Name is :"<<p1.name<<endl;
cout<<"Age is :"<<p1.age<<endl;
    return 0;
}