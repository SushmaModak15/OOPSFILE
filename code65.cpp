#include<iostream>
#include<string>
using namespace std;
class car;
class model{
    private :
    string number;
    public:
    model(string u){
        number=u;
    }
    friend class car;
};

class car{
    public:
    void output(model m){
        cout<<"car number :"<<m.number<<endl;
    }
};
int main(){
    string f;
    cout<<"enter car number :"<<endl;
    getline(cin,f);
    model s(f);
    car d;
    d.output(s);
}

