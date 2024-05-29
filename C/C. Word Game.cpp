
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
#define asort(v) sort((v).begin(),(v).end())        //  Ascending Order Sort
#define dsort(v) sort((v).rbegin(),(v).rend())     //   Descending Order Sort
#define pb push_back
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

        map <string,ll> m1,m2,m3;

        string s;

        for(ll i = 0; i < n; i++)
        {
            cin >> s;
            m1[s] = 0;
        }

        for(ll i = 0; i < n; i++)
        {
            cin >> s;
            m2[s] = 0;
        }

        for(ll i = 0; i < n; i++)
        {
            cin >> s;
            m3[s] = 0;
        }

        ll cntV1 = 0;
        ll cntV2 = 0;
        ll cntV3 = 0;

        for(auto &i : m1)
        {
            if((m2.find(i.first) == m2.end()) && (m3.find(i.first) == m3.end()))
            {
                cntV1 += 3;
                i.second = 1;
            }
            else if((m2.find(i.first) != m2.end()) && (m3.find(i.first) == m3.end()))
            {
                cntV1 += 1;
                cntV2 += 1;
                i.second = 1;
                m2[i.first] = 1;
            }
            else if((m2.find(i.first) == m2.end()) && (m3.find(i.first) != m3.end()))
            {
                cntV1 += 1;
                cntV3 += 1;
                i.second = 1;
                m3[i.first] = 1;
            }
        }

        for(auto &i : m2)
        {
            if(i.second != 1)
            {
                if((m1.find(i.first) == m1.end()) && (m3.find(i.first) == m3.end()))
                {
                    cntV2 += 3;
                    i.second = 1;
                }
                else if((m1.find(i.first) != m1.end()) && (m3.find(i.first) == m3.end()))
                {
                    cntV1 += 1;
                    cntV2 += 1;
                    i.second = 1;
                    m1[i.first] = 1;
                }
                else if((m1.find(i.first) == m1.end()) && (m3.find(i.first) != m3.end()))
                {
                    cntV2 += 1;
                    cntV3 += 1;
                    i.second = 1;
                    m3[i.first] = 1;
                }
            }
        }

        for(auto &i : m3)
        {
            if(i.second != 1)
            {
                if((m1.find(i.first) == m1.end()) && (m2.find(i.first) == m2.end()))
                {
                    cntV3 += 3;
                    i.second = 1;
                }
                else if((m1.find(i.first) != m1.end()) && (m2.find(i.first) == m2.end()))
                {
                    cntV1 += 1;
                    cntV3 += 1;
                    i.second = 1;
                    m1[i.first] = 1;
                }
                else if((m1.find(i.first) == m1.end()) && (m2.find(i.first) != m2.end()))
                {
                    cntV2 += 1;
                    cntV3 += 1;
                    i.second = 1;
                    m2[i.first] = 1;
                }
            }
        }

        printf("%lld %lld %lld\n",cntV1,cntV2,cntV3);
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
