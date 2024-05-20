
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
        ll n,f,a,b;
        cin >> n >> f >> a >> b;

        vector <ll> v;

        for(ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            v.pb(temp);
        }

        bool state = true;
        ll totalMessageSend = 0;


        ll x = v[0] * a;
        if(x < b)
        {
            f -= x;
        }
        else
        {
            f -= b;
        }

        totalMessageSend++;

        if(f <= 0)
        {
            state = false;
        }



        for(ll i = 1; i < n && state; i++)
        {

            ll x = (v[i] - v[i - 1]) * a;

            if(x < b)
            {
                f -= x;
            }
            else
            {
                f -= b;
            }

            totalMessageSend++;

            if(f <= 0)
            {
                state = false;
                break;
            }

            if(totalMessageSend == n)
            {
                break;
            }
        }

        if(state)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
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
