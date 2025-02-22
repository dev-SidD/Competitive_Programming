#include <iostream>
using namespace std;

int main()
{
    int t; 
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int ans = 3;
        for (int i = 0; i < n; i++)
        {
             cin>>arr[i];
        }
        for(int i = 0; i < n; i++){
            if(i+1 == arr[arr[i]-1]){
                ans = 2;
                 break;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
