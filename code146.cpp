#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"enter two number "<<endl;
    cin>>a>>b;
try{
    if(b==0){
        throw b;
    }
    cout<<" result = "<<a/b<<endl;
}
    catch(int x){
        cout<<" division by zero is not allowed"<<endl;
    }
}
