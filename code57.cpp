//order of constructor
#include<iostream>
#include<string>
using namespace std;
class parents{
    public:
    parents(){
        cout<<"hi we are parents ,raise our kids with great effort"<<endl;
    }};
    class kids:public parents{
        public:
        kids(){
            cout<<" hi we are kids ,obedient to our parents"<<endl;

        }
    };
    int main(){
kids k1;
    }
