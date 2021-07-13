#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
string baal(string str)
{

	stringstream ss(str);
	string temp;

	// Making the string empty
	str = "";

	// Running loop till end of stream
	// and getting every word
	while (getline(ss, temp, ' ')) {
		// Concatenating in the string
		// to be returned
		str = str + temp;
	}
	return str;
}

int main()
{
    ll t; cin >> t; ll r = 1;
    getchar();
    while(t--)
    {

        string s1, s2; getline(cin, s1); getline(cin, s2);
        string S1 = baal(s1), S2 = baal(s2);
        transform(S1.begin(), S1.end(), S1.begin(), ::tolower);
        transform(S2.begin(), S2.end(), S2.begin(), ::tolower);
        sort(S1.begin(), S1.end());
         sort(S2.begin(), S2.end());
         if(S1 == S2)
        {
            cout << "Case " << r++ << ": " << "Yes\n";
        }
         else
        {
            cout << "Case " << r++ << ": " << "No\n";
        }
        //cout << S1 << endl << S2 << endl;

    }
}

