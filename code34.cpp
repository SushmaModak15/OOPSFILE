//reverse array

#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"reverse array"<<endl;
for(i=n-1;i>=0;i--){
    cout<<arr[i]<<"  ";
}
}