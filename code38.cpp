// copy the string manually
#include<iostream>
#include<string>
using namespace std;
int main(){
string s,f;
cout<<"enter a string "<<endl;
getline(cin,s);
for(int i=0;i<s.length();i++){
    f+=s[i];
}
cout<<"copied string :"<<f<<endl;
return 0;
}






