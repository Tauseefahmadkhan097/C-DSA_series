// C++ Multidimensional Arrays
// In C++, we can create an array of an array, known as a multidimensional array. For example:

// int x[3][4];
// Here, x is a two-dimensional array. It can hold a maximum of 12 elements.

// We can think of this array as a table with 3 rows and each row has 4 columns as shown


// Three-dimensional arrays also work in a similar way. For example:

// float x[2][4][3];
// This array x can hold a maximum of 24 elements.

// We can find out the total number of elements in the array simply by multiplying its dimensions:


// #include<iostream>
// using namespace std;

// int main(){
// int arr[2][3]={{2,34,13},{33,44,55}};
// cout<<"Index Of 33 "<<arr[2][0]<<endl;

// // 2. Initialization of three-dimensional array

// int test[2][3][4] = { 
//                      { {3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2} },
//                      { {13, 4, 56, 3}, {5, 9, 3, 5}, {5, 1, 4, 9} }
//                  };
//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
// int test[3][2]={
//     {2,-3},
//     {3,5},
//     {4,5}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){

//             cout<<" ["<<i<<"]["<<j<<"]="<<test[i][j]<<endl;
//         }
//     }
//     return 0;
// }

// Example 2: Taking Input for Two Dimensional Array

#include<iostream>
using namespace std;
int main(){
int test[2][3];
cout<<"Enter 6 Numbers :";
for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){

            cin>>test[i][j];
            // cout<<endl;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){

            cout<<" ["<<i<<"]["<<j<<"]="<<test[i][j]<<endl;
        }
    }
    return 0;
}