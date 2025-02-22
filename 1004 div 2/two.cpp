#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> freqMap;
        int minVal = INT_MAX, maxVal = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            minVal = min(minVal, arr[i]);
            maxVal = max(maxVal, arr[i]);
            freqMap[arr[i]]++;
        }
        bool allEven = true;
        for (auto it : freqMap) {
            if (it.second % 2 != 0) {
                allEven = false;
                break;
            }
        }
        if (allEven) {
            cout << "YES" << endl;
            continue;
        }
        int extraPairs = 0;
        bool isValid = true;
        for (int i = minVal; i <= maxVal; i++) {
            if (freqMap.find(i) == freqMap.end()) {
                if (extraPairs >= 2) {
                    extraPairs -= 2;
                } else if (extraPairs == 1) {
                    isValid = false;
                    break;
                } else {
                    extraPairs = 0;
                }
            } else {
                if (freqMap[i] == 1) {
                    if (extraPairs == 0) {
                        isValid = false;
                        break;
                    }
                    extraPairs--;
                } else {
                    extraPairs += freqMap[i] - 2;
                }
            }
        }
        cout << (isValid && extraPairs % 2 == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}
