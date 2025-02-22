#include <iostream>
using namespace std;

int main()
{
    int N = 101;

    int t, n ,k;

    cin >> t;
    while (t--)
    {
       
        int hash[N] = {0};
        cin>>n>>k;
         int result = n ;
         int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            hash[arr[i]]++;
        }
        for(int i = 1; i<N; i++){
            if(hash[i]>=k)
              result = k-1;
            
        }
       cout<<result<<endl;
    }

    return 0;
}
