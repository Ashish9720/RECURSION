#include<iostream>
using namespace std;
void reverse(string &str,int i,int e){
    if(i>e){
        return ;
    }  
    swap(str[i],str[e]);
    i++;
    e--;
    reverse(str,i,e);


}

int main(){
    string name="ashish";
    cout<<"the original string:"<<name;
    reverse(name ,0, name.length()-1);
    cout<<"the reversed name :"<<name<<endl;
    return 0;

}