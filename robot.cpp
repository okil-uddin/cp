#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    while (cin >> s) {

        int x = 0;
        int y = 0;

        // Store visited positions
        set<pair<int, int>> visited;

        // Starting position
        visited.insert({0, 0});

        bool repeated = false;

        for (char c : s) {

            if (c == 'L') {
                x--;
            }
            else if (c == 'R') {
                x++;
            }
            else if (c == 'U') {
                y++;
            }
            else if (c == 'D') {
                y--;
            }

            // Check if this position was already visited
            if (visited.count({x, y})) {
                repeated = true;
            }

            // Add current position
            visited.insert({x, y});
        }

        cout << "(" << x << ", " << y << ")" << endl;

        if (repeated) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}