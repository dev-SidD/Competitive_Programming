#define ll long long int
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        ll maxEven=0,count=0;
        ll maxOdd=0;
        for(int i=0;i<n;i++){
            if(arr[i]&1 && arr[i]>maxOdd) maxOdd=arr[i];
            else if(arr[i]%2==0 && arr[i]>maxEven) maxEven=arr[i];

        }
        for(int i=0;i<n;i++){
            if(arr[i]%2==0) count++;
        }
        if(count==0 || count==n) {
            cout<<0<<endl; 
            continue;
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]%2==0 && arr[i]<maxOdd) {
                maxOdd+=arr[i];
            }
            else if(arr[i]%2==0 && arr[i]>maxOdd){
                count++;
                break;
            }
        }
        cout<< count<<endl;;
    }
    
    return 0;
}
