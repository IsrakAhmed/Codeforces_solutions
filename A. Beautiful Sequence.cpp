
/*

    Name        :   Israk Ahmed
    E-Mail      :   israkahmed7@gmail.com
    Github      :   github.com/IsrakAhmed
    Institution :   University of Rajshahi

*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define asort(v) sort((v).begin(),(v).end())        // Ascending Order Sort
#define dsort(v) sort((v).rbegin(),(v).rend())     // Descending Order Sort
#define pb push_back
#define sum(v) accumulate(v.begin(), v.end(), 0)
#define gcd __gcd
#define toLower(s) transform((s).begin(),(s).end(),(s).begin(),::tolower)       //toLower(s);
#define toUpper(s) transform((s).begin(),(s).end(),(s).begin(),::toupper)       //toUpper(s);
#define rmvChar(s,c) (s).erase(remove((s).begin(), (s).end(), c), (s).end())    //remove specific character from string
#define rmvDuplicates(x) (x).erase(unique((x).begin(), (x).end()), (x).end());  //works only for sorted string
#define all(x) (x).begin(),(x).end()
#define nl "\n"

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

        vector<ll> v;
        ll mini = 1e9;
        bool one = false;
        for(ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            mini = min(mini,temp);
            v.pb(temp);
            if(temp == 1) one = true;
        }

        if(one)
        {
            cout << "YES" << nl;
        }
        else if(mini > n)
        {
            cout << "NO" << nl;
        }
        else
        {
            ll state = false;
            for(ll i = 0; i < n; i++)
            {
                if(v[i] <= i + 1)
                {
                    cout << "YES" << nl;
                    state = true;
                    break;
                }
            }
            if(!state)
            {
                cout << "NO" << nl;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solution();
    return 0;
}
