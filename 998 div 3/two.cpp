#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> decks(n, vector<int>(m));
        vector<pair<int, int>> smallest_card(n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> decks[i][j];
            }
            sort(decks[i].begin(), decks[i].end());
            smallest_card[i] = {decks[i][0], i};
        }
        sort(smallest_card.begin(), smallest_card.end());
        vector<int> perm;
        for (auto& p : smallest_card) {
            perm.push_back(p.second + 1);
        }
        int pile_top = -1;
        bool is_valid = true;
        for (int round = 0; round < m && is_valid; ++round) {
            for (int i : perm) {
                auto& deck = decks[i - 1];
                auto it = upper_bound(deck.begin(), deck.end(), pile_top);
                if (it == deck.end()) {
                    is_valid = false;
                    break;
                }
                pile_top = *it;
                deck.erase(it);
            }
        }
        if (is_valid) {
            for (int i : perm) {
                cout << i << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
