#include<iostream>
using namespace std;
class arithmetic_addition{
    public:
    int add(int a,int b){
return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
    float add(float a,float b,float c){
        return a+b+c;
    }
};
int main(){
int d,f,g;
float h,i,o;
arithmetic_addition pop;
cout<<"enter two interger number"<<endl;
cin>>d>>f;
cout<<"sum : " << pop.add(d,f)<<endl;
cout<<"enter three interger number "<<endl;
cin>>d>>f>>g;
cout<<"sum : "<<pop.add(d,f,g)<<endl;;
cout<<"enter three float number"<<endl;
cin>>h>>i>>o;
cout<<"sum : " <<pop.add(h,i,o)<<endl;



}
    