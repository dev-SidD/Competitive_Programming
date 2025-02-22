#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> numbers(n, 0);
        unordered_map<int, int> frequencyMap;
        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            numbers[i] = value;
            frequencyMap[value]++;
        }
        int uniqueCount=frequencyMap.size(), startIndex = 0, endIndex = 0;

        for (int i = 0; i < n; i++) {
            int j = i;
            while (j < n && frequencyMap[numbers[j]] == 1) {
                j++;
            }

            if (j - i > endIndex - startIndex) {
                startIndex = i;
                endIndex = j;
            }

            i = j;
        }

        if (n - uniqueCount==0)
            cout << 1 << " " << n;
        else if (uniqueCount==1||(startIndex==0&&endIndex==0))
            cout << 0;
        else
            cout << startIndex + 1 << " " << endIndex;
        cout << endl;
    }

    return 0;
}
