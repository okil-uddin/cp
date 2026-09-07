#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    double ans = 0, len = 0;
    for (int i = 0; i < n; i++) {
        double p;
        cin >> p;
        ans += (2 * len + 1) * p;
        len = (len + 1) * p;
    }

    cout << fixed << setprecision(15) << ans << "\n";
    return 0;
}