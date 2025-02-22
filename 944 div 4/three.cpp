#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
      int a, b, c ,d;
      cin>>a;
      cin>>b;
      cin>>c;
      cin>>d;

      if(a<b){
            if((c>a && c<b ) == (d>a && d<b)){
                cout<<"NO"<<endl;
            } 
            else{
                cout<<"YES"<<endl;
            }
      }
      else{
        if((c<a && c>b) == (d<a && d>b)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
      }
      
    }
    
    return 0;
}
