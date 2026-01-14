#include<iostream>
using namespace std;
class employee{
    int id;
  static  int count;
public:
void getinfo(int f){
    id=f;
    count++;
}
void displaydata(){
    cout<<"id of employee is : "<<id<<endl;
}
static void  countdata(){
    cout<<"total number of employee :"<< count<<endl;
}

};
int employee ::count=0;
int main(){
    int q,y,t;
    
    cout<<"E1 id "<<endl;
    cin>>q;
      cout<<"E2 id "<<endl;
    cin>>y;
      cout<<"E3 id "<<endl;
    cin>>t;
    employee e1,e2,e3;
   e1. getinfo(q);
      e2. getinfo(y);
      e3. getinfo(t);
   e1.displaydata();
      e2.displaydata();
  e3.displaydata();

employee::countdata();

    

}