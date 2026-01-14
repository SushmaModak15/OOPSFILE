//grading system

#include<iostream>
using namespace std;
int main(){
int a;
cout<<"enter number between 1 to 100"<<endl;
cin>>a;
if(a>=80 && a<=100)
cout<<"grade A"<<endl;
else if(a>=65)
cout<<"grade B"<<endl;
else if(a>=50) 
cout<<"grade C"<<endl;
else if (a>=40)
cout<<"grade D"<<endl;
else
cout<<"fail"<<endl;



}