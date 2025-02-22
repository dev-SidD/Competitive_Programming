#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        string s;
        cin>>s;

       string r =  s.substr(1,s.length())+ s[0];   
       if(s.compare(r) == 0){
            cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
        cout<<r<<endl;
       }
        
    }
    
    return 0;
}
