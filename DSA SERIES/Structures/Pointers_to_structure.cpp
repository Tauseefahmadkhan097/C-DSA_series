// A pointer variable can be created not only for built-in types like (int, float, double etc.) but they can also be created for user defined types like structure.

// If you do not know what pointers are, visit C++ pointers.


// #include <iostream>
// using namespace std;

// struct Distance {
//     int feet;
//     float inch;
// };

// int main() {
//     Distance d;
//     Distance* ptr = &d;
    
//     cout << "Enter feet: ";
//     cin >> (*ptr).feet;
//     cout << "Enter inch: ";
//     cin >> (*ptr).inch;
 
//     cout << "Displaying information." << endl;
//     cout << "Distance = " << ptr->feet<< " feet " << ptr->inch << " inches";

//     return 0;
// }


// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Accessing Member Function Using Arrow (->) Operator

#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
    
    void print_distance() {
    	cout << "Displaying Information." << endl;
    	cout << "Distance = " << feet << " feet " << inch << " inches";
    }
};

int main() {
    Distance d;

    Distance* ptr = &d;
    
    cout << "Enter feet: ";
    cin >> ptr->feet;
    cout << "Enter inch: ";
    cin >> ptr->inch;
    
    ptr->print_distance();

    return 0;
}