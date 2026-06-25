#include<iostream>
using namespace std;
int main(){
    const float pi=3.14;
    int radius;
    float area,circumference;

    cout<<"Enter radius:";
    cin>>radius;

    area=pi*radius*radius;
    circumference=2*pi*radius;

    cout<<"Area is:"<<area<<endl;
    cout<<"Circumference is:"<<circumference<<endl;

    return 0;
}