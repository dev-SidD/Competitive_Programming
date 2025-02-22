#include <bits/stdc++.h>
using namespace std;

class UnionFind {
    vector<int> parent, rank;

public:
    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        iota(parent.begin(), parent.end(), 0);
    }
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};
int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int gridSize, numLamps;
        cin >> gridSize >> numLamps;
        vector<tuple<int, int, int>> lampData(numLamps);
        for (int i = 0; i < numLamps; i++) {
            int xPos, yPos, radius;
            cin >> xPos >> yPos >> radius;
            lampData[i] = make_tuple(xPos, yPos, radius);
        }
        UnionFind uf(numLamps);
        vector<bool> startsAtEdge(numLamps, false), endsAtEdge(numLamps, false);
        for (int i = 0; i < numLamps; i++) {
            int x1, y1, r1;
            tie(x1, y1, r1) = lampData[i];
            if (x1 - r1 <= 0) {
                startsAtEdge[i] = true;
            }
            if (x1 + r1 >= gridSize) {
                endsAtEdge[i] = true;
            }
            for (int j = i + 1; j < numLamps; j++) {
                int x2, y2, r2;
                tie(x2, y2, r2) = lampData[j];

                long long distanceSquared = 1LL * (x1 - x2) * (x1 - x2) + 1LL * (y1 - y2) * (y1 - y2);
                long long radiusSumSquared = 1LL * (r1 + r2) * (r1 + r2);
                if (distanceSquared <= radiusSumSquared) {
                    uf.unite(i, j);
                }
            }
        }
        unordered_set<int> startClusters, endClusters;
        for (int i = 0; i < numLamps; i++) {
            int root = uf.find(i);
            if (startsAtEdge[i]) {
                startClusters.insert(root);
            }
            if (endsAtEdge[i]) {
                endClusters.insert(root);
            }
        }
        bool reachable = false;
        for (int startCluster : startClusters) {
            if (endClusters.count(startCluster)) {
                reachable = true;
                break;
            }
        }
        cout << (reachable ? "YES" : "NO") << endl;
    }
    return 0;
}
