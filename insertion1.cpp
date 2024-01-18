#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
        cout<<"\t";
    }
}
int main(){
    int arr[]={42,96,61,20,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    cout<<"Sorted array:\n";
    printArray(arr,n);
}