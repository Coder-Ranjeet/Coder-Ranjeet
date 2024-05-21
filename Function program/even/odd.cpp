#include<iostream>
using namespace std;
int evenodd(int n) {
    if(n%2==0){
        return 1;
    }else{
        return 0;
    }
}
int main() {
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int even = evenodd(n);
    if(even){
        cout<<"It is even number.";
    }else{
    cout<<"It is odd number.";
    }
    return 0;
}