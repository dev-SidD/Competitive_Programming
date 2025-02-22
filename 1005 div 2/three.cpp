#include <bits/stdc++.h>

using namespace std;
#define int long long

const int MAX_SIZE = 2e5 + 5;
int testCases, arraySize, numbers[MAX_SIZE], prefixPositive[MAX_SIZE], suffixNegative[MAX_SIZE];

signed main() {
    
    cin >> testCases;
    while (testCases--) {
        cin >> arraySize;
        
        for (int i = 1; i <= arraySize; i++) 
            cin >> numbers[i];

        prefixPositive[0] = suffixNegative[arraySize + 1] = 0;

        for (int i = 1; i <= arraySize; i++) 
            prefixPositive[i] = prefixPositive[i - 1] + max(0LL, numbers[i]);

        for (int i = arraySize; i >= 1; i--) 
            suffixNegative[i] = suffixNegative[i + 1] + min(0LL, numbers[i]);

        int maxDifference = 0;
        for (int i = 0; i <= arraySize; i++) 
            maxDifference = max(maxDifference, prefixPositive[i] - suffixNegative[i + 1]);

        cout << maxDifference << '\n';
    }
    
    return 0;
}
