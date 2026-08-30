#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string n;
        cin >> n;
        if (n.length() >= 3 && n[0] == '1' && n[1] == '0' && n[2] != '0')
        {
            int x = stoi(n.substr(2));
            if (x >= 2)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    // while (t--)
    // {
    //
    // }
    return 0;
}