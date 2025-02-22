#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> mpp;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mpp[arr[i]]++;
        }

        int x = n - 2;
        int first = -1, second = -1;

        for (int i = 0; i < n; i++)
        {
            int target = x / arr[i];
            if (x % arr[i] == 0 && mpp.find(target) != mpp.end())
            {
                if (target == arr[i] && mpp[arr[i]] > 1)
                {
                    first = arr[i];
                    second = arr[i];
                    break;
                }
                else if (target != arr[i])
                {
                    first = arr[i];
                    second = target;
                    break;
                }
            }
        }

        cout << first << " " << second << endl;
    }
    return 0;
}
