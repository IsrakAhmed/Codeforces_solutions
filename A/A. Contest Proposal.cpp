
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

bool check(vector <ll> a, vector <ll> b)
{
    for(ll i = 0; i < a.size(); i++)
    {
        if(a[i] > b[i])
        {
            return false;
        }
    }

    return true;
}

void solution()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector <ll> a,b;

        for(ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;

            a.pb(temp);
        }

        for(ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;

            b.pb(temp);
        }

        asort(a);
        asort(b);

        if(check(a,b))
        {
            printf("0\n");
        }

        else
        {
            for(ll i = 0; i < n; i++)
            {
                a.pb(b[i]);

                asort(a);

                a.erase(next(a.begin(), n));

                if(check(a,b))
                {
                    printf("%lld\n",i + 1);
                    break;
                }
            }
        }
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
