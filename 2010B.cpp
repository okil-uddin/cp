#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    if (a != 1 && b != 1)
    {
        cout << 1;
    }
    else if (a != 2 && b != 2)
    {
        cout << 2;
    }
    else
    {
        cout << 3;
    }

    return 0;
}