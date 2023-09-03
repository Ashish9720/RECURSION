#include<iostream>
using namespace std;
int sumofelmnt(int *arr,int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    else{
        int ans=arr[0]+sumofelmnt(arr+1,size-1);
        return ans;
    }
}

int main()
{
    int arr[6]={1,3,4,6,8,9};
    int size=6;
    int sum=sumofelmnt(arr,size);
    cout<<"sum of element:"<<sum;
    return 0;
}