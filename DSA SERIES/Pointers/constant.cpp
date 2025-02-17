// Here, we got an error because we tried to change the values of variables passed using const references.
// ERROR!
// /tmp/RXT9OkJpWq.cpp: In function 'void swap(const int&, const int&)':
// /tmp/RXT9OkJpWq.cpp:9:8: error: assignment of read-only reference 'n1'
//     9 |     n1 = n2;
//       |     ~~~^~~~
// /tmp/RXT9OkJpWq.cpp:10:8: error: assignment of read-only reference 'n2'
//    10 |     n2 = temp;
//       |     ~~~^~~~~~


#include <iostream>
using namespace std;

// function definition to swap values
// using const references
void swap(const int &n1,const int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {

    // initialize variables
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // call function to swap numbers
    swap(a, b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}