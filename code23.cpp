// using nested if

#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter a "<<endl;
cin>>a;
cout<<"enter b "<<endl;
cin>>b;
cout<<"enter c "<<endl;
cin>>c;
if(a==b){
    if(b==c)
    cout<<"all numbers are equal"<<endl;
else
cout<<" two numbers are equal"<<endl;}
else if(a==c)
cout<<"two numbers are equal"<<endl;
else if(b==c)
cout<<"two numbers are equal"<<endl;
else 
cout<<"all numbers are different"<<endl;

}



