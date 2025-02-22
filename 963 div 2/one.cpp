#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        unordered_map<char, int> charFreq;
        for (int i = 0; i < s.length(); i++)
        {
            charFreq[s[i]]++;
            if (charFreq[s[i]] > n)
                charFreq[s[i]] = n;
        }

        int ans = charFreq['A'] + charFreq['B'] + charFreq['C'] + charFreq['D'];

        cout << ans << endl

            ;
    }

    return 0;
}
