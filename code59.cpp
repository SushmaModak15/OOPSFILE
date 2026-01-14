//const in constructor
#include<iostream>
#include<string>
using namespace std;
class area{
    public:
    const float pi;
    float s;
    area(float r):pi(3.14),s(r){
      
      
        cout<< "area of circle: "<<pi*s*s<<endl;

    }
};
int main(){
    float h;
    cout<<"enter r"<<endl;
    cin>>h;
    area a1(h);
    
}