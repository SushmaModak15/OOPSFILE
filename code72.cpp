#include<iostream>
using namespace std;
class student{
    float percentage;
  static  int count;
public:
void getinfo(int h){
    percentage=h;
    count++;
}
void displaydata(){
    cout<<"percentage of student is : "<<percentage<<endl;
}
static void  countdata(){
    cout<<"total number of employee :"<< count<<endl;
}

};
int student ::count=0;
int main(){
    int q,y,t;
    
    cout<<"student1 id "<<endl;
    cin>>q;
      cout<<"student2 id "<<endl;
    cin>>y;
      cout<<"student3 id "<<endl;
    cin>>t;
    student s1,s2,s3;
   s1. getinfo(q);
      s2. getinfo(y);
      s3. getinfo(t);
   s1.displaydata();
      s2.displaydata();
  s3.displaydata();

student::countdata();

    

}