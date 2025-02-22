#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>a;
        vector<int>b;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin>>num;
            a.push_back(num);
        }
         for (int i = 0; i < n; i++)
        {
            int num;
            cin>>num;
            b.push_back(num);
        }
        int i = 0;
        int count = 0;
        while (i!=n)
        {
           if(a[i]>b[i]){
             a.push_back(b[i]);
             sort(a.begin(),a.end());
             a.pop_back();
             count++;
           }
           i++;
        }
        cout<<count<<endl;
    }
    
    return 0;
}


