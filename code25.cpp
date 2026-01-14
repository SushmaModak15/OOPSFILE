//switch statement
#include<iostream>
using namespace std;
int main(){

int a;
cout<<"enter number between 1 to 5 to see season's name" <<endl;
cin>>a;

switch(a){
case 1 :cout<<"winter"<<endl;
break;
case 2 :cout<<"summer"<<endl;
break;
case 3 :cout<<"spring"<<endl;
break;
case 4 :cout<<"autumn"<<endl;
break;
case 5:cout<<"rainy"<<endl;
break;
default :cout<<"please enter valid number";
break;

}
}