#include<iostream>
using namespace std;

int power(int c,int e){
    if(e==0)
    return 1;

    return c*power(c,e-1);
}
int main(){
    int coff,expo;
    cin>>coff;
    cin>>expo;

    int ans=power(coff,expo);
    cout<<ans;
    return 0;
}