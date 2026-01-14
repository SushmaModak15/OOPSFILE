//largest two number using class
#include<iostream>
#include<cmath>
using namespace std;
class comparision{
    public:
    int a,b;
    
void input(){
    cout<<"enter two number"<<endl;
    cin>>a;
    cin>>b;
}
void large(){
    cout<<"largest number : "<<max(a,b)<<endl;
}
};
int main(){
    comparision c1;
    c1.input();
    c1.large();
}