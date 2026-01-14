//destructor 
#include<iostream>
#include<string>
using namespace std;
class add{
    public:
    int a,b;
    add(int s,int e){
        a=s;
        b=e;
        cout<<"add : "<<a+b<<endl;
    }
    ~add(){
        cout<<"hi I am destructor, deleting everything"<<endl;
    }
};
int main(){
    int h,g;
    cout<<"enter two integer number"<<endl;
    cin>>h;
    cin>>g;
add a1(h,g);

}