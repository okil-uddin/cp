#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool r = false;

        for(int i = 0; i+1<s.size();i++){
            if(s[i] != s[i+1]){
                swap(s[i],s[i+1]);
                r=true;
                break;
            }
        }
        if(r){
            cout<<"YES\n";
            cout<<s<<'\n';
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}