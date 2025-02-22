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
        if (n <= 4)
        {
            cout << -1 << endl;
            continue;
        }

        if (n == 5)
        {
            cout << 1 << " " << 3 << " " << 5 << " " << 4 << " " << 2 << endl;
            continue;
        }
        if (n == 6)
        {
            cout << 1 << " " << 3 << " " << 5 << " " << 4 << " " << 6 << " " << 2 << endl;
            continue;
        }
        if (n == 7)
        {
            cout << 1 << " " << 3 << " " << 7 << " " << 5 << " " << 4 << " " << 6 << " " << 2 << endl;
            continue;
        }
        int i;
        if (n % 2 == 0)
        {
            i = n - 1;
        }
        else
        {
            i = n;
        }
        for (i; i >= 1; i -= 2)
        {
            cout << i << " ";
        }
        i = 8;
        for (i; i <= n; i += 2)
        {
            cout << i << " ";
        }
        i = 2;
        for (i; i < 8; i += 2)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}