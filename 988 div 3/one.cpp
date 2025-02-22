#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int maxScore = 0;

        for (auto i : freq) {
            maxScore += i.second / 2;
        }

        cout << maxScore << endl;
    }
    return 0;
}
