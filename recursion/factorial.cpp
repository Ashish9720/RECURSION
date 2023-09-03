#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0)
    return 1;
    int f=factorial(n-1);
    int s=n*f;
    return s;

}

int main(){
    int n;
    cin>>n;
    
    int ans= factorial(n);
    cout<<ans<<endl;
    return 0;

}