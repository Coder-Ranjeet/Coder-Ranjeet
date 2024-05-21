#include<iostream>
using namespace std;
void abc(char ch){
    if(ch>='A' && ch<='Z'){
        cout<<"1";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"0";
    }
    else{
        cout<<"-1";
    }
}
int main() {
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    abc(ch);
}