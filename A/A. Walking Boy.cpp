
/* Israk Ahmed */

#include <bits/stdc++.h>

#define ll long long
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0
#define gcd __gcd

using namespace std;

ll random(ll low, ll high)
{
    // Generate random number
    return rand() % (high - low + 1) + low;
}

void solution()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector <ll> v;
        v.pb(0);
        for(int i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            v.pb(temp);
        }

        if(v[n - 1] != 1440){
            v.pb(1440);
        }

        ll walks = 0;
        for(int i = 1; i < v.size(); i++)
        {
            if(v[i] - v[i - 1] >= 240)
            {
                walks += 2;
                break;
            }
            else if(v[i] - v[i - 1] >= 120)
            {
                walks += 1;
            }
        }

        if(walks >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
}

int main()
{
    solution();
    return 0;
}
