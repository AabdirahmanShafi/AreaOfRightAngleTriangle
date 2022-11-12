#include<iostream>
using namespace std;

int main(){
    int base, height, hypotenuse, perimeter;
    float area;
    cout<<"\nEnter base of right angle triangle:";
    cin>>base;
    cout<<"\nEnter height of a riaght angle traingle:";
    cin>>height;
    cout<<"\nEnter the hypotenuse of a riaght angle traingle: ";
    cin>>hypotenuse;
    area =0.5* base * height;
    cout<<"\n\nArea of Right angle triangle is="<<area<<endl;

    perimeter=2*(base+height);

    cout<<"Perimeter of Right angle triangle is="<<perimeter<<endl;

}
