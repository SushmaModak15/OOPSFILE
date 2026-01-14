#include<iostream>
#include<string>
using namespace std;
class phone{
    private :
    int pin;
    public:
    phone(int s){
        pin=s;
    }
    friend void display(phone p);

};
void display(phone p){
    cout<<"pin :"<<p.pin<<endl;
}
int main(){
    int s;
    cout<<"enter pin"<<endl;
    cin>>s;
    phone y(s);
    display(y);
}