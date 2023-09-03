#include<iostream>
using namespace std;

bool linearsearch(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remain=linearsearch(arr+1,size-1,key);
        return remain;
    }

}

int main(){
    int arr[10]={1,3,5,4,2,7,9,8,2,4};
    int size=10;
    int key=9;

    bool ans=linearsearch(arr,size,key);
    if(ans){
        cout<<"Element found";
    }
    else{
        cout<<"element not found";
    }

}