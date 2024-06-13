
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


bool isVowel(char c)
{
    if(c == 'a' || c == 'e')
    {
        return true;
    }

    return false;
}


void solution()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        string s;
        cin >> s;

        string out = "";

        for(ll i = 0; i < n;)
        {
            if(!isVowel(s[i]) && i + 1 < n && isVowel(s[i + 1]))
            {
                out.pb(s[i]);
                out.pb(s[i + 1]);

                i += 2;

                if(i < n - 1 && !isVowel(s[i]) && !isVowel(s[i + 1]))
                {
                    out.pb(s[i]);
                    i++;
                }

                else if(i == n - 1 && !isVowel(s[i]))
                {
                    out.pb(s[i]);
                    i++;
                }

                if(i != n)
                {
                    out.pb('.');
                }
            }
        }

        cout << out << "\n";
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
