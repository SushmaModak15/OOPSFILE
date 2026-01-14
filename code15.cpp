//bitwise operator

#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter a"<<endl;
cin>>a;
cout<<"enter b"<<endl;
cin>>b;
cout<<"bitwise and(&) = "<< ( a&b )<<endl;
cout<<"bitwise xor(^)  =  "<<(a^b )<<  endl;
cout<<"bitwise or(`) =  "<<(a|b)<<endl;
cout<<"bitwise not(!) = "<<~a <<endl;
cout<<"right shift(>>) = "<<(a >> 1)<<endl;
cout<<"left shift(<<)=  "<<( a<<1)<<endl;


}