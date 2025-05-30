/*

            Bismillah Hir Rehmanir Rahim
            Allah knows best

*/

/*

    Name        :   Israk Ahmed
    E-Mail      :   israkahmed7@gmail.com
    Github      :   github.com/IsrakAhmed
    LinkedIn    :   linkedin.com/in/israkahmed
    Institution :   University of Rajshahi

*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define mod 1000000007
#define pi 3.141592653589793
#define f(i, a, n) for (ll i = a; i < n; i++)
#define asort(v) sort((v).begin(),(v).end())        //  Ascending Order Sort
#define dsort(v) sort((v).rbegin(),(v).rend())     //   Descending Order Sort
#define pb push_back
#define mp make_pair
#define sum(v) accumulate(v.begin(), v.end(), 0)
#define rotates(v,i) rotate(v.begin(), v.begin() + i, v.end())       //  moves first i items to last
#define isSorted(v) is_sorted(v.begin(), v.end())                    //  checks if the vector is sorted or not
#define gcd __gcd
#define toLower(s) transform((s).begin(),(s).end(),(s).begin(),::tolower)       //  toLower(s);
#define toUpper(s) transform((s).begin(),(s).end(),(s).begin(),::toupper)       //  toUpper(s);
#define rmvChar(s,c) (s).erase(remove((s).begin(), (s).end(), c), (s).end())    //  remove specific character from string
#define rmvDuplicates(x) (x).erase(unique((x).begin(), (x).end()), (x).end());  //  works only for sorted string or vector
#define all(x) (x).begin(),(x).end()
#define endl "\n"
#define merge(v1,v2,m) merge(v1.begin(), v1.end(), v2.begin(), v2.end(),m.begin());     //  merge two vectors
#define reverseS(s) reverse(s.begin(), s.end())     //  reverse the string
#define nSum(n) (n * (n + 1)) / 2                   //  sum of first N positive integers
#define nmSum(n,m) ((n + m) * (m - n + 1)) / 2      //  sum of positive integers from N to M (N <= M)



void solution()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector <ll> v;

        for(ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;

            v.pb(abs(temp));
        }

        ll cnt = 0;

        for(ll i = 1; i < n; i++)
        {
            cnt += (v[0] <= v[i]) ? 1 : 0;
        }

        if(n % 2 != 0)
        {
            n /= 2;
        }
        else
        {
            n = (n / 2) - 1;
        }

        if(cnt >= n)
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
