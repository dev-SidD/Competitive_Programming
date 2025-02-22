#include <bits/stdc++.h>
using namespace std;

bool check(int x, int y) {
    if (y-x == 1) {
        return true;
    }
    if ( x>y&&(x-y)%9==8) {
        return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        if (check(x, y)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
