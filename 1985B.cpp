#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int ans = 2;
        int higest = 0;

        for (int x = 2; x <= n; x++)
        {
            int sum = 0;
            for (int i = 1; i * x <= n; i++){
                sum = sum + i * x;
            }
            if(sum>higest){
                higest = sum;
                ans  = x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}