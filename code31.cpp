// input array and display array elements
#include<iostream>
using namespace std;
int main(){
int n;
cout<< "enter size "<<endl;
cin>>n;
int arr[n];
cout<<"enter array elements"<<endl;
for(int i =0;i<n;i++){
    cin>>arr[i];

}
cout<<"show array elements"<<endl;
for(int j=0;j<n;j++){
    cout<<arr[j]<<endl;
}
}