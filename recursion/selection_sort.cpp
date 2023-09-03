#include<iostream>
using namespace std;

int findminterm(int arr[],int start,int end){
    int minterm=start;
    for(int i=start+1;i<=end;i++){
        if(arr[i] < arr[minterm]){
            minterm=i;
        }
    }
    return minterm;

}

int sortarray(int *arr,int start,int end){
    if(start>=end){
        return 1;
    }
    int minterm=findminterm(arr,start,end);
    swap(arr[start],arr[minterm]);
    sortarray(arr,start+1,end);


}

int main(){
    int  arr[7]={4,2,6,1,9,8,5};
    int n=7;

    sortarray(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}