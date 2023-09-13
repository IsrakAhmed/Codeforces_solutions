
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

        vector <ll> a,b,c;

        bool isSame = true;

        ll temp;
        cin >> temp;
        a.pb(temp);

        for(ll i = 1; i < n; i++)
        {
            cin >> temp;
            a.pb(temp);

            if(isSame && a[i] != a[i - 1])
            {
                isSame = false;
            }
        }

        if(isSame)
        {
            printf("-1\n");
        }

        else
        {
            asort(a);

            ll j;

            for(j = 0; j < n - 1; j++)
            {
                b.pb(a[j]);
            }
            j--;

            c.pb(a[n - 1]);

            while(a[n - 1] == a[j])
            {
                b.pop_back();
                c.pb(a[n - 1]);
                j--;
            }

            printf("%d %d\n", j + 1, n - j - 1);

            for(ll k = 0; k <= j; k++)
            {
                if(k == j)
                {
                    printf("%d\n",b[k]);
                }
                else
                {
                    printf("%d ",b[k]);
                }
            }

            for(ll k = 0; k < c.size(); k++)
            {
                if(k == c.size() - 1)
                {
                    printf("%d\n",c[k]);
                }
                else
                {
                    printf("%d ",c[k]);
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
