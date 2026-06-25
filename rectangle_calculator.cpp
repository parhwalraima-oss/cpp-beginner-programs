#include<iostream>
using namespace std;
int main(){
    int length, breadth, area, perimeter;

    cout<<"Value of Length:";
    cin>>length;

    cout<<"Value of Breadth:";
    cin>>breadth;

    area=length*breadth;
    perimeter=2*(length+breadth);

    cout<<"The Area is:"<<area<<endl;
    cout<<"The Perimeter is:"<<perimeter<<endl;

    return 0;
}