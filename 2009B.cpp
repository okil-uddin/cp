#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string rows[500];

        for (int i = 0; i < n; i++)
        {
            cin >> rows[i];
        }

        for (int i = n - 1; i >= 0; i--)
        {

            if (rows[i][0] == '#')
                cout << 1 << " ";

            else if (rows[i][1] == '#')
                cout << 2 << " ";

            else if (rows[i][2] == '#')
                cout << 3 << " ";

            else if (rows[i][3] == '#')
                cout << 4 << " ";
        }
        cout<<endl;
    }
    return 0;
}