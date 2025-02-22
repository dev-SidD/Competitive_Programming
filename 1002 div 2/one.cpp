#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       unordered_map<int, int> mppA;
       unordered_map<int, int> mppB;
       int n;
       cin>>n;
       vector<int> a(n);
       vector<int> b(n);
       for(int i = 0; i<n; i++){
         cin>>a[i];
         mppA[a[i]]++;
       }
       for(int i = 0; i<n; i++){
         cin>>b[i];
          mppB[b[i]]++;
       }
       if(mppA.size()>1 &&  mppB.size()>1){
        cout<<"yes"<<endl;
       }
       else if(mppA.size()>2 ||  mppB.size()>2 ){
        cout<<"yes"<<endl;
       }
       else{
        cout<<"no"<<endl;
       }
    }
    return 0;
}
