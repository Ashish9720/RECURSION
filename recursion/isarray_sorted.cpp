#include<iostream>
using namespace std;
bool isarraysorted(int *arr,int size){
if(size==0||size==1)
return 1;
if(arr[0]>arr[1])
return false;
else{
    bool ans=isarraysorted(arr+1,size-1);
    return ans;
}
}

int main()
{
    int arr[5]={1,2,3,1,5};
    int size=5;

    bool ans=isarraysorted(arr,size);
    if(ans){
        cout<<"Array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
    
}