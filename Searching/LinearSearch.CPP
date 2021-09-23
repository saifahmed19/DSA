//Linaer search

#include<iostream>
using namespace std;

int linaerSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
          return i;  
        }
    }
    return -1;
}

int main(){

    int n;
    cout<<"Enter the length of array: ";
    cin>>n;


    cout<<"Enter array: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int key;
    cout<<"Enter the Key: ";
    cin>>key;
cout<<"Index of key in array:  "<<linaerSearch(arr, n, key)<<endl;

}
