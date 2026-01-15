#include<iostream>
#include<string>
using namespace std;
class animal{
    public:
   virtual  void sound(){
cout<<"dog barks"<<endl;
    }
};
class wildanimals :public animal{
    public:
    void sound(){
        cout<<"lion roars"<<endl;
    }
};
int main(){
    animal* a;
    wildanimals w;
    a=&w;
a->sound();
}