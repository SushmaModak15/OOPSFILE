//constructor overloading
#include<iostream>
#include<string>
using namespace std;
class arithmetic {
    public:
    float a,b;
    int j,l;
    
    arithmetic(float d,float g){
a=d;
b=g;
cout<<"addition = "<<a+b<<endl;
cout<<"subtraction = "<<a-b<<endl;
cout<<"multiplication = "<<a*b<<endl;

    }
    arithmetic(int s,int p){
      j=s;
      l=p;
      cout<<"addition = "<<j+l<<endl;
cout<<"subtraction = "<<j-l<<endl;
cout<<"multiplication = "<<j*l<<endl;

    }
};
int main(){
    int w,y;
    float r,t;
    cout<<"enter two float values"<<endl;
    cin>>r ;
    cin>>t;
    arithmetic a1(r,t);
}