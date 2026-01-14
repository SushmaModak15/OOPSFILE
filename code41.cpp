//simple class and object
#include<iostream>
#include<string>
using namespace std;
class books{
    public:
string name;
 string author_name;
 string genre;
 int pages;
};
int main(){
    books b1;
    cout<<"enter book's details"<<endl;
    cout<<"name : "<<endl;
    getline(cin,b1.name);
        cout<<"genre: "<<endl;
        getline(cin,b1.genre);
    cout<<" author's name: "<<endl;
    getline(cin,b1.author_name);
    cout<<"pages: "<<endl;
    cin>>b1.pages;

    cout<<"name : "<<b1.name<<endl;
    cout<<"genre: "<<b1.genre<<endl;
    cout<<"author name : "<<b1.author_name<<endl;
    cout<<"pages: "<<b1.pages<<endl;








}