

/*

    Name        :   Israk Ahmed
    E-Mail      :   israkahmed7@gmail.com
    Institution :   University of Rajshahi

*/

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
        ll n,m;
        cin >> n >> m;

        set<ll> present;
        queue<ll> recent;
        map<ll,ll> time;

        for(ll i = n; i >= 1; i--)
        {
            present.insert(i);
            recent.push(i);
            time[i] = (-1);
        }

        ll timeCount = 1;
        for(ll i = 0; i < m; i++)
        {
            ll temp;
            cin >> temp;

            if(!present.count(temp))
            {
                present.erase(recent.front());
                time[recent.front()] = timeCount;
                present.insert(temp);
                recent.pop();
                recent.push(temp);
            }
            timeCount++;
        }

        for(ll i = 1; i <= n; i++)
        {
            cout << time[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    solution();
    return 0;
}
