#include<iostream>
using namespace std;
int sortarray(int *arr,int n){
    if(n==0||n==1){
        return 1;
    }
    
}

int main(){
    int arr[7]={4,2,7,9,5,1,3};
    int n=7;

    sortarray(arr,n);
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
}