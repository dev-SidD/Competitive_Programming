#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        vector<int> possible_a3 = {a1 + a2, a4 - a2, a5 - a4};
        int max_fibonacciness = 0;
        for (int a3 : possible_a3) {
            vector<int> a = {a1, a2, a3, a4, a5};
            int count = 0;
            if (a[2] == a[0] + a[1]) count++;
            if (a[3] == a[1] + a[2]) count++;
            if (a[4] == a[2] + a[3]) count++;
            max_fibonacciness = max(max_fibonacciness, count);
        }

        cout << max_fibonacciness << endl;
    }
    return 0;
}
