#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int size, limit;
        cin >> size >> limit;
        vector<int> numbers(size, 0);

        for (int index = 0; index < size; index++) {
            int value;
            cin >> value;
            numbers[index] = value;
        }

        int resultIndex = limit / 2 + 1;
        bool flag = false;
        
        if (limit == size) {
            int count = 1;
            for (int index = 1; index < size; index += 2) {
                if (numbers[index] != count) {
                    resultIndex = count;
                    break;
                }
                count++;
            }
        }

        for (int index = 1; index <= size - limit + 1; index++) {
            if (numbers[index] != 1) {
                flag = true;
                break;
            }
        }

        if (limit == size) 
            cout << resultIndex;
        else {
            if (flag) 
                cout << "1";
            else 
                cout << "2";
        }

        cout << endl;
    }

    return 0;
}
