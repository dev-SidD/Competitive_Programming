#include <iostream>
using namespace std;

int main()
{
    int N = 101;

    int t, n;
    int count;
    cin >> t;
    while (t--)
    {
        int hash[N] = {0};
        count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            hash[arr[i]]++;
        }

        for (int i = 1; i < N; i++)
        {
            if (hash[i] >= 3)
            {
                count+= hash[i]/3;
            }
        }
        cout << count << endl;
    }

    return 0;
}
