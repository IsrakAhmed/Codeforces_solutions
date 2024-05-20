
/* Israk Ahmed */

#include <bits/stdc++.h>

#define ll long long
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solution()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,m;
        cin >> n >> m;

        string s,t;
        cin >> s >> t;

        ll sdiff = 0;
        for(int i = 1; i < n; i++)
        {
            if(s[i] == s[i - 1])
            {
                sdiff++;
            }
        }
        ll tdiff = 0;
        for(int i = 1; i < m; i++)
        {
            if(t[i] == t[i - 1])
            {
                tdiff++;
            }
        }

        if(sdiff == 0 && tdiff == 0)
        {
            cout << "YES" << endl;
        }
        else if((s[n - 1] == t[m - 1] && (sdiff > 0 || tdiff > 0)))
        {
            cout << "NO" << endl;
        }
        else if((sdiff > 1 || tdiff > 1) || (sdiff == 1 && tdiff == 1))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}

int main()
{
    solution();
    return 0;
}
