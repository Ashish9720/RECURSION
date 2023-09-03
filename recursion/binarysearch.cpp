#include<iostream>
using namespace std;
int binarysearch(int *arr,int s,int e,int k){
    if(s>e)
        return false;
    int mid=s+(e-s)/2;
    if(arr[mid]==k)
        return true;   
    if(arr[mid]<k){
        return binarysearch(arr,mid+1,e,k);
    } 
    else{
        return binarysearch(arr,s,mid-1,k);
    }
    
    
}

int main(){
    int arr[6]={2,4,6,7,8,9};
    int size=6;
    int key=8;
    int ans=binarysearch(arr,0,5,key);
    if(ans){
        cout<<"present";
    }
    else{
        cout<<"not present";
    }
    return 0;

}