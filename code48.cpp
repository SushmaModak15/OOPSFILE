//calculating area using class
#include<iostream>
using namespace std;
class area{
    public:
    const float pi=3.14;
    float r,l,b;
    void circle(){
        cout<<"enter radius"<<endl;
        cin>>r;
        cout<<"area of circle "<<endl;
        cout<< r*r*pi<<endl;
    }
    void rectangle(){
        cout<<"enter length and breath"<<endl;
        cin>>l;
        cin>>b;
        cout<<"area of rectangle"<<endl;
        cout<< l*b<<endl;
    }
};
int main(){
    area a1;
    cout<<"area of circle "<<endl;
a1.circle();
cout<<"area of rectangle"<<endl;
a1.rectangle();

}