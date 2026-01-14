//using if else

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,rem,temp,sum=0;
    cout<<"enter  a number"<<endl;
    cin>>num;
    temp=num;

    while(temp!=0){

rem=temp%10;
sum=sum+pow(rem,3);
temp=temp/10;
    }
    if(sum==num)
    cout<<"armstrong number"<<endl;
    else
    cout<<"not an armstrong number";
}