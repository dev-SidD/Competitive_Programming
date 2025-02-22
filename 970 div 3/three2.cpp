#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        long long l, r;
        cin>>l;
        cin>>r;

        int count = 1;
        while (l<=r)
        {
            l = l+count;
            count++;
        }
        cout<<count-1<<endl;
        
    }
    
    return 0;
}
