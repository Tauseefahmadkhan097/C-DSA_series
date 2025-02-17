// Find Maximum and Minimum
// Write a function that takes an array of N numbers and returns both the maximum and minimum values.


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5],maximum,minimum;
// cout<<"Enter Five Values "<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
// maximum=arr[0];
// minimum=arr[0];

//  for(int i=0;i<5;i++){
//         if(arr[i]>maximum){
//             maximum=arr[i];
//         }
//     }

//     cout<<"The Maximum Number is "<<maximum<<endl;


// for(int i=0;i<5;i++){
//         if(arr[i]<minimum){
//             minimum=arr[i];
//         }
//     }

//     cout<<"The Minimum Number is "<<minimum<<endl;
//     return 0;
// }

// Reverse an Array
// Implement a program that reverses a given array without using an extra array.

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5];
// cout<<"Enter Five Values "<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }


//  for(int i=4;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }

//     // cout<<"The Maximum Number is "<<maximum<<endl;



//     return 0;
// }

// Count Even and Odd Numbers
// Write a program that counts the number of even and odd numbers in an array.


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5],count1=0,count2=0;
// cout<<"Enter Five Values "<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }


//  for(int i=0;i<5;i++){
//      if(arr[i]%2==0){
// count1++;
//     }
//     else{
//         count2++;
//     }
//  }

//  cout<<"The Number of Odd is :"<<count2<<endl;
//  cout<<"The Number of even  is :"<<count1<<endl;



//     return 0;
// }

// Implement a function that searches for an element in an array and returns its index (or -1 if not found).

// #include<iostream>
// using namespace std;

// int SearchForElement(int arr[],int element){
//  for(int i=0;i<5;i++){
//         if(element==arr[i]){
//             return i;
//         }
        
       
//     }
// return -1;
    

// }

// int main(){
//     int arr[5],element=7;
// cout<<"Enter Five Values "<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }

//     int check=SearchForElement(arr,element);
//     cout<<"index ["<<check<<"]";


 



//     return 0;
// }


// Sort an Array (Bubble Sort)
// Write a program to sort an array using the Bubble Sort algorithm.

// Second Largest Element

// #include<iostream>
// using namespace std;

// void SearchForElement(int arr[]){
//  for(int i=0;i<5;i++){

//     for(int j=0;j<4;j++)
//         if(arr[j]>arr[j+1]){
//         swap(arr[j],arr[j+1]);
//         }
        
       
//     }
//     cout<<"The sorted Array is "<<endl;
// for(int k=0;k<5;k++){
//     cout<<arr[k]<<" ";
    
// }
 

// }

// int main(){
//     int arr[5];
// cout<<"Enter Five Values "<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }

// SearchForElement(arr);
    




//     return 0;
// }

// Second Largest Element
// Implement a function that finds the second largest element in an array without sorting.

// #include<iostream>
// using namespace std;

// void SecondLargestElement(int arr[]){
//  for(int i=0;i<5;i++){

//     for(int j=0;j<4;j++)
//         if(arr[j]>arr[j+1]){
//         swap(arr[j],arr[j+1]);
//         }
        
       
//     }
//     cout<<"The sorted Array is "<<endl;
// for(int k=0;k<5;k++){
//     cout<<arr[k]<<" ";
    
// }

 

// }

// int main(){
//     int arr[5];
// cout<<"Enter Five Values "<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }

// SecondLargestElement(arr);
    


// cout<<"The Second Largest Element in the array is "<<arr[4-2];

//     return 0;
// }

// Merge Two Sorted Arrays
// Given two sorted arrays, merge them into a single sorted array.

#include<iostream>
using namespace std;

void SortedArray(int arr[]){
 for(int i=0;i<5;i++){

    for(int j=0;j<4;j++)
        if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        }

        
       
    }
    cout<<"The sorted Array is "<<endl;
for(int k=0;k<5;k++){
    if(arr[k]!=arr[k-1]){
            cout<<arr[k]<<" ";

    }
    
}

 

}

int main(){
    int arr[5];
cout<<"Enter Five Values "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

SortedArray(arr);
    


// cout<<"The Second Largest Element in the array is "<<arr[4-2];

    return 0;
}