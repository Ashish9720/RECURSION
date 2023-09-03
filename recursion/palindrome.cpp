#include<iostream>
using namespace std;

bool checkpalindrome(string str,int i,int j)
{
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return checkpalindrome(str,i+1,j-1);

    }
}
int main()
{
    string name="bookoob";
    cout<<endl;
    bool palindrome=checkpalindrome(name,0,name.length()-1);
    if(palindrome){
        cout<<"The word is a palindrome."<<endl;
    }
    else{
        cout<<"the word is not palindorme";
    }
}