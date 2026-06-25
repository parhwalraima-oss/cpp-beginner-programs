#include<iostream>
using namespace std;
int main(){
    float celsius,fahrenheit;

    cout<<"Enter temp in celsius:";
    cin>>celsius;

    fahrenheit=(celsius*9/5)+32;

    cout<<"The fahrenheit temp is:"<<fahrenheit<<endl;

    return 0; 
}