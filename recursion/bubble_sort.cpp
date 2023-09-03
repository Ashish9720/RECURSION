#include<iostream>
using namespace std;
int sortarray(int *arr,int n){
    if(n==0||n==1){
        return 1;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortarray(arr,n-1);
}

int main(){
    int arr[6]={1,4,7,3,9,2};
    int size=6;

    sortarray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }



}