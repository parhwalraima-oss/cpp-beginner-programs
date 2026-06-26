#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    if(n>0){
        cout<<"The number is poitive"<<endl;
    }
    else if(n<0){
        cout<<"The number is negative"<<endl;
    }
    else{
        cout<<"The number is zero"<<endl;
    }
    return 0;
}