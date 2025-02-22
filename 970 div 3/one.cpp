#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a, b;
        cin>>a;
        cin>>b;
        
        if(a == 0 ){
            if(b%2==0)
             cout<<"yes"<<endl; 
            else 
              cout<<"no"<<endl;
           continue;
        }
        if(a%2==0)
         cout<<"yes"<<endl;
        else 
          cout<<"no"<<endl; 
    } 
    return 0;
}
