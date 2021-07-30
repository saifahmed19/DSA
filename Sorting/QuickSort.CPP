#include<iostream>
using namespace std;

void swap(int arr[],int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[], int f, int r){
    int pivot=arr[r];
    int i=f-1;

    for(int j=f;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;


} 
void quickSort(int arr[], int f, int r){
    if(f<r){
        int piv = partition(arr,f,r);
        quickSort(arr,f,piv-1);
        quickSort(arr,piv+1,r);
    }     
}
int main(){

    int arr[5]={5,8,2,4,1};
    quickSort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    
}