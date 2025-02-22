#include <bits/stdc++.h>
using namespace std;
int checkSquare(int n)
{
    int low = 2, high = n / 2;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x =  checkSquare(n);
        bool flag = false;
        if (x == -1){
            cout << "No" << endl;
            continue;
        }

        else{
            for(int i = 0; i<x; i++){
                if(s[i]=='0'){
                    cout<<"No"<<endl;
                    break;;
                }
            }
        }
            
    }
    return 0;
}
