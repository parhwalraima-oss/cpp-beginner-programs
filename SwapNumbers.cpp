#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;

    cout<<"Enter num1:";
    cin>>num1;

    cout<<"Enter num2:";
    cin>>num2;

    num3=num1;
    num1=num2;
    num2=num3;

    cout<<"First number is:"<<num1<<endl;
    cout<<"Second number is:"<<num2<<endl;

    return 0;
}