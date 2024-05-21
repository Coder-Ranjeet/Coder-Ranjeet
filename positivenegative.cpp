#include<iostream>
using namespace std;
int positivenegative(int n){
    if(n>=0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int num = positivenegative(n);
    if(num){
        cout<<"Positive number.";
    }
    else{
        cout<<"Negative number.";
    }
    return 0;
}