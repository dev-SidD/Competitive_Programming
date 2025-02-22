#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int arraySize, start, end;
       cin >> arraySize >> start >> end;

        vector<int> numbers(arraySize);
        for (int i = 0; i < arraySize; ++i) {
            cin >> numbers[i];
        }

        int segmentLength = end - start + 1;

        vector<long long> prefix, suffix;
        for (int i = 0; i < end; i++) {
            prefix.push_back(numbers[i]);
        }
        for (int i = start - 1; i < arraySize; i++) {
            suffix.push_back(numbers[i]);
        }
        sort(prefix.begin(), prefix.end());
        sort(suffix.begin(), suffix.end());
        long long prefixSum = 0, suffixSum = 0;
        for (int i = 0; i < segmentLength; ++i) {
            if (i < prefix.size()) {
                prefixSum += prefix[i];
            }
            if (i < suffix.size()) {
                suffixSum += suffix[i];
            }
        }
        long long minSum = min(prefixSum, suffixSum);
        cout << minSum << endl;
    }
    return 0;
}
