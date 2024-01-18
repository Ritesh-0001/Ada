#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(arr[min],arr[i]);
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
        cout<<"\t";
    }
}
int main(){
    int arr[]={23,56,89,41,99};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    cout<<"Sorted array:\n";
    printArray(arr,n);
}