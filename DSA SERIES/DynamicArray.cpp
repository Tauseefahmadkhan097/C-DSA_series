// #include<iostream>
// using namespace std;

// int main(){
// // C++ Memory Management
// // C++ allows us to allocate the memory dynamically in run time. This is known as dynamic memory allocation.

// // In other programming languages such as Java and Python, the compiler automatically manages the memories allocated to variables. But this is not the case in C++.

// // In C++, we need to deallocate the dynamically allocated memory manually after we have no use for the variable.

// // We can allocate and then deallocate memory dynamically using the new and delete operators respectively.

// // data_type* pointer_variable = new data_type{value};

// int* arr=new int{20};

//     return 0;
// }

// C++ program to store GPA of n number of students and display it
// where n is the number of students entered by the user

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter total number of students: ";
    cin >> num;

    // Check if input is valid
    if (num <= 0) {
        cout << "Invalid number of students!" << endl;
        return 1;  // Exit the program
    }

    float* ptr = new float[num];  // Dynamic array allocation

    cout << "Enter GPA of students." << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Student " << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\nDisplaying GPA of students." << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Student " << i + 1 << ": " << *(ptr + i) << endl;
    }

    delete[] ptr;  // Free memory
    ptr = nullptr;  // Prevent dangling pointer

    return 0;
}
