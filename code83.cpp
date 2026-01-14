//multiole inheritence
#include<iostream>
#include<string>
using namespace std;
class industry{
    public:
    string name;
    string manufacture ;
    

};
class shop{
    public:
    string product_name;
    float price;
    string isedible;
};
class customer:public industry,public shop{
    
    public:
    string customer_id;
  string type;
  string order;

  void setinfo(){
    cout<<"enter customer details "<<endl;

    cout<<" industry name :"<<endl;
    getline(cin,name);

     cout<<"manufacture : "<<endl;
        getline(cin,manufacture);

     cout<<"product_name: "<<endl;
        getline(cin,product_name);

     cout<<"price : "<<endl;
    cin>>price;

     cout<<"isedible : "<<endl;
     getline(cin,isedible);
    cin.ignore();
     cout<<"customer_id : "<<endl;
        getline(cin,customer_id);

     cout<<"type :"<<endl;
        getline(cin,type);

     cout<<"order: "<<endl;
        getline(cin,order);

  }
    void getinfo(){
      cout<<"industry name : "<<name<<endl;
        cout<<"manufacture :  "<<manufacture <<endl;
                cout<<"product_name  "<<product_name <<endl;
        cout<<"price :  "<<price <<endl;
        cout<<"isedible : "<<isedible <<endl;
        cout<<"customer_id : "<<customer_id <<endl;
        cout<<"type :  "<<type <<endl;
        cout<<"order :  "<<order <<endl;
        

    }
};
int main(){
 customer c1;
 c1.setinfo();
 c1.getinfo();   
}

    




  
  

