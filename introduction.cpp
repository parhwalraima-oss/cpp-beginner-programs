#include<iostream>
using namespace std;
int main(){
    string name,city;
    int age;

    cout<<"Enter your name:";
    cin>>name;

    cout<<"Enter your age:";
    cin>>age;

    cout<<"Enter your city:";
    cin>>city;

    cout<<"\nHello my name is "<<name<<", i am "<<age<<" years old and i live in "<<city<<"."<<endl;

    return 0;
}