#include<iostream>
using namespace std;
int main(){
    float weight,height,bmi;

    cout<<"Enter value of weight:";
    cin>>weight;

    cout<<"Enter value of height:";
    cin>>height;

    bmi=weight/(height*height);

    cout<<"The value of BMI is:"<<bmi<<endl;

    return 0;
}