
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
#define endl "\n"


void solution()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a;
        for(ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            a.pb(temp);
        }
        asort(a);

        vector<ll> b;
        for(ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            b.pb(temp);
        }
        asort(b);

        ll sumA = 0;
        ll sumB = 0;

        for(ll i = 0; i < n; i++)
        {
            sumA += a[0] + b[i];
        }

        for(ll i = 0; i < n; i++)
        {
            sumB += b[0] + a[i];
        }

        printf("%lld\n",min(sumA,sumB));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}
