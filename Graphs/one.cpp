#include <bits/stdc++.h>
using namespace std;

int main() {
    int numCities, numRoads;
    cin >> numCities >> numRoads;
    int startCity, endCity;
    cin >> startCity >> endCity;
    vector<int> isCursed(numCities + 1);
    for (int i = 0; i < numCities; i++) {
        cin >> isCursed[i];
    }
    if (isCursed[startCity] || isCursed[endCity]) {
        cout << -1 << endl;
        return 0;
    }
    vector<vector<int>> adjacencyList(numCities + 1);
    for (int i = 0; i < numRoads; i++) {
        int city1, city2;
        cin >> city1 >> city2;
        if (!isCursed[city1] && !isCursed[city2]) {
            adjacencyList[city1].push_back(city2);
            adjacencyList[city2].push_back(city1);
        }
    }
    queue<int> bfsQueue;
    bfsQueue.push(startCity);
    vector<bool> visited(numCities + 1, false);
    visited[startCity] = true;
    int shortestPath = 0;
    while (!bfsQueue.empty()) {
        int nodesAtCurrentLevel = bfsQueue.size();
        while (nodesAtCurrentLevel--) {
            int currentNode = bfsQueue.front();
            bfsQueue.pop();

            if (currentNode == endCity) {
                cout << shortestPath << endl;
                return 0;
            }
            for (auto neighbor : adjacencyList[currentNode]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    bfsQueue.push(neighbor);
                }
            }
        }
        shortestPath++;
    }
    cout << -1 << endl;
    return 0;
}
