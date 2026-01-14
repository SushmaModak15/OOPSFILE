//dynamically allocate memory in constructor
#include<iostream>
#include<string>
using namespace std;
class add{
    public:
    int *a ,*b;
    add(int s,int p){
        a=new int;
        b=new int;
        *a=s;
        *b=p;
        cout<<"add :"<<*a+*b<<endl;
    }
    ~add(){
        delete a;
        delete b;
        cout<<" hi I am destructor ,deallocated memory of a and b"<<endl;
    }
};
int main(){
    int d,f;
cout<<"enter two integer number"<<endl;
cin>>d;
cin>>f;
add a1(d,f);
}