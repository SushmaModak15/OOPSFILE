//find largest element

#include<iostream>

using namespace std;
int main(){

int n,i,largest;
cout<<"enter size"<<endl;
cin>>n;
int arr[n];
cout<<"enter array elements"<<endl;
for(i=0;i<n;i++){
    cin>>arr[i];
}
largest=arr[0];
for(i=1;i<n;i++){


if(arr[i]>largest){

largest=arr[i];

}

}

cout<<"largest = "<<largest<<endl;

}