//using if

#include<iostream>
using namespace std;
int main(){
int a,i,f=0;
cout<<"enter a number"<<endl;
cin>>a;
for(i=2;i<=a-1;i++){
if(a%i==0){
    f=1;
}}
if(f==0)
cout<<"  a prime number"<<endl;
else
cout<<" not a prime number"<<endl;

}


