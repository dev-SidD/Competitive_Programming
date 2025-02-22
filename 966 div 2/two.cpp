#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];
long long totalExcess = 0, totalDeficit = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] >= b[i]) {
            totalExcess += a[i] - b[i]; // Redistributable amount
        } else {
            totalDeficit += (b[i] - a[i]); // Needed amount
        }
    }
   
        if (totalExcess>=totalDeficit*(n-1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
