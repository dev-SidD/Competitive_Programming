#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        vector<int> x(n);
        unordered_map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
            freq[x[i]]++;
        }
        int pair_count = 0;
        for (auto pair : freq) {
            int a = pair.first;
            int b = k - a;
            if (freq.find(b) != freq.end()) {
                if (a == b) {
                    pair_count += freq[a] / 2;
                } else if (a < b) {
                    pair_count += min(freq[a], freq[b]);
                }
            }
        }
        cout << pair_count << endl;
    }

    return 0;
}
