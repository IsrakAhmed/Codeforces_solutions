
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

void solution()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,i;
        cin >> n;

        vector<ll> v;

        ll zeros = 0;

        for(i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            if(temp != 0)
            {
                v.pb(temp);
            }
            else{
                zeros++;
            }
        }

        if(zeros == n){
            printf("0 0\n");
            continue;
        }

        ll sum = 0;
        ll operations = 0;

        ll temp = v[0];
        if(temp <= 0)
        {
            temp *= -1;
        }
        sum += temp;

        for(i = 1; i < v.size(); i++)
        {
            ll data = v[i];

            if(data < 0)
            {
                data *= -1;

                if(i == v.size() - 1)
                {
                    operations++;
                }
            }
            else if(data > 0 && v[i-1] < 0)
            {
                operations++;
            }
            sum += data;
        }

        if(v.size() == 1 && v[0] < 0){
            operations++;
        }

        printf("%lld %lld\n",sum,operations);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solution();
    return 0;
}
