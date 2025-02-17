#include<iostream>
using namespace std;
int PrintValues(int arr[]){
    cout<<"Array Elements "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){

int arr[5]={1,2,3,5,6};
PrintValues(arr);


    return 0;

}