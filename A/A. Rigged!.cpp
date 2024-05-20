
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

        vector<ll> e;

        ll polyS,polyE;
        cin >> polyS >> polyE;

        bool noWay = false;

        for(ll i = 1; i < n; i++)
        {
            ll tempS,tempE;

            cin >> tempS >> tempE;

            if(tempS < polyS)
            {
                continue;
            }
            else if(tempS == polyS && tempE == polyE)
            {
                noWay = true;
            }
            else
            {
                e.pb(tempE);
            }
        }

        if(noWay)
        {
            printf("-1\n");
        }
        else
        {
            dsort(e);
            if(!e.empty() && e[0] < polyE){
                printf("%lld\n",polyS);
            }
            else if(e.empty()){
                printf("%lld\n",polyS);
            }
            else{
                printf("-1\n");
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
