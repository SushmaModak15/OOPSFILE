// break and continue
#include<iostream>
using namespace std;
int main(){
    int i,start,end;
    int f=0;
    cout<<" enter double digit start range"<<endl;
    cin>>start;
    cout<<" end range"<<endl;
    cin>>end;
    for(i=start;i<=end;i++){
        if(i<10)
        continue;
        
    int  temp=i;
    int  reverse=0;
     while(temp!=0){
      int  rem=temp % 10;
        reverse=reverse * 10 + rem;
        temp=temp/10;
     }
        if(reverse==i){
            
            
            cout<<"got first palindrome "<<i<<endl;
        f=1;
        break;
     } }
      if(f==0)
      cout<<" no palindrome found "<<endl;
    
}
        
        
    

    

