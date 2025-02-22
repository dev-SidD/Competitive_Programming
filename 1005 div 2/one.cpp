#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        string s;
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            s.push_back(c);
        }
        int ans = 0;
        char ch = '0';
        for(int j=0;j<n;j++){
            if(s[j] != ch){
                ans++;
            }
            ch = s[j];
        }
        cout<<ans<<endl;

    }
    return 0;
}