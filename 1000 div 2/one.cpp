#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       int first, second;
       cin>>first>>second;
       if(first==1 && second == 1){
        cout<<1<<endl;
       }
       else{
        cout<<second-first<<endl;
       }
    }
    return 0;
}
