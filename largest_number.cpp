#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"The value of a is:";
    cin>>a;

    cout<<"The value of b is:";
    cin>>b;

    if(a>b){
        cout<<"a is greater than b"<<endl;
    }
    else if(a<b){
        cout<<"b is greater than a"<<endl;
    }
    else{
        cout<<"both a and b are equal"<<endl;
    }
    return 0;
}