
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
        ll n,k,start = 0, end = 0;

        cin >> n >> k;

        for(ll i = 0; i < n; i++)
        {
            ll l,r;
            cin>>l>>r;

            if(l == k)
            {
                start++;
            }

            if(r == k)
            {
                end++;
            }
        }

        if(start > 0 && end > 0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}

int main()
{
    solution();
    return 0;
}
