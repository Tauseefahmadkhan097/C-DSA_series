// Example 2: Take Inputs from User and Store Them in an array

// #include<iostream>
// using namespace std;

// int main(){
// int arr[5];
// cout<<"Enter values For Array ";
// for(int i=0;i<5;i++){

//     cin>>arr[i];
// }
// cout<<"Array ";
// for(int i=0;i<5;i++){

//     cout<<arr[i]<<" ";
// }
//     return 0;
// }


// Example 3: Display Sum and Average of Array Elements Using for Loop

#include<iostream>
using namespace std;

int sum=0;
double average;
int main(){
int arr[5];
cout<<"Enter values For Array ";
for(int i=0;i<5;i++){

    cin>>arr[i];
}
cout<<"Array ";
for(int i=0;i<5;i++){

    cout<<arr[i]<<" ";
    sum=sum+arr[i];
}

cout<<"\n The Sum is "<<sum<<endl;
cout<<"The average is "<<sum/5<<endl;
    return 0;
}