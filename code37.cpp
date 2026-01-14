// string length without library function
#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
int n=0;
cout<<"enter a string "<<endl;
getline(cin, s);


for(char ch : s ){
    n++;
}
cout<<"length of string is =  "<< n <<endl;
}