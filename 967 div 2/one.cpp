#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<pair<int, int>> v(n);
        for(int i = 0; i<n; i++){
            cin>>v[i].first>>v[i].second;
        }
        int peri = (4*m);
        for(int i = 1; i<n; i++){
            peri+=(4*m)- 2*((m-v[i].first) + (m-v[i].second));
        }
        cout<<peri<<endl;
    }
    return 0;
}
