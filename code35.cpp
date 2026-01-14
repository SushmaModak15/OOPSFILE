// matrix multiplication

#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"enter row between 1 to 5"<<endl;
    cin>>r;
    cout<<"enter column range between 1 to 5"<<endl;
    cin>>c;
    int arr[5][5],arr1[5][5],arr2[5][5];
    cout<<"enter array 1 elements"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
            
        }
    }cout<<"showing the array 1 elements"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<arr[i][j]<<"  ";
        }cout<<endl;}

    cout<<"enter array 2 elements"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr1[i][j];
        }
    }cout<<"showing arra 2 elements"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<arr1[i][j]<<"  ";
        }
    cout<<endl;
}
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
    
    arr2[i][j]=arr[i][j] + arr1[i][j];
    }}

    cout<<"sum of two array"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<arr2[i][j]<<"  ";
        }
        cout<<endl;
    }
}