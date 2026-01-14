//swapping without third variable

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b "<<endl;
    cin>>b;
    cout<<"before swapping"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b= "<<b<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"after swapping  "<<"a = "<<a<<"  b = "<<b<<endl;

}