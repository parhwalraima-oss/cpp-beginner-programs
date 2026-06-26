#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age:";
    cin>>age;

    if(age<0){
        cout<<"Invalid age entered"<<endl;
    }
    else if(age>=18){
        cout<<"Eligible to vote"<<endl;
    }
    else{
        cout<<"Not eligible to vote"<<endl;
    }
    return 0;
}