#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter the first number:";
    cin>>num1;

    cout<<"Enter the second number:";
    cin>>num2;

    cout<<"Enter the third number:";
    cin>>num3;

    if(num1>num2 && num1>num3){
        cout<<num1<<" is greater than both num2 and num3 then num1 is the largest"<<endl;
    }
    else if(num2>num1 && num2>num3){
        cout<<num2<<" is greater than both num1 and num3 then num2 is the largest"<<endl;
    }
    else if(num3>num1 && num3>num2){
        cout<<num3<<" is greater than both num1 and num2 then num3 is the largest"<<endl;
    }
    else{
        cout<<"All numbers are equal or two numbers are equal"<<endl;
    }
    return 0;
}