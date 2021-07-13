#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n; cin >> n;  ll r = 1;
    while(n--)
    {
        string s; cin >> s;
        // Case 1: https://lightoj.com
        cout << "Case" << ' ' << r++ << ": ";
        if(s[4] == 's')
            cout << s << endl;
        else
        {
            for(ll i = 0; i < 4; i++)
                cout << s[i];
            cout << 's';
            for(ll i = 4; i < s.size(); i++)
                cout << s[i];
            cout << endl;
        }
    }




}


