#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;
        if(abs(a-b)%2==0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
