#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define asort(v) sort((v).begin(),(v).end())        // Ascending Order Sort
#define dsort(v) sort((v).rbegin(),(v).rend())      // Descending Order Sort
#define pb push_back
#define sum(v) accumulate(v.begin(), v.end(), 0)
#define gcd __gcd
#define toLower(s) transform((s).begin(),(s).end(),(s).begin(),::tolower)      // toLower(s);
#define toUpper(s) transform((s).begin(),(s).end(),(s).begin(),::toupper)      // toUpper(s);
#define rmvChar(s,c) (s).erase(remove((s).begin(), (s).end(), c), (s).end())   // remove specific character from string
#define rmvDuplicates(x) (x).erase(unique((x).begin(), (x).end()), (x).end())  // works only for sorted string or vector
#define all(x) (x).begin(),(x).end()
#define endl "\n"
#define merge(v1,v2,m) merge(v1.begin(), v1.end(), v2.begin(), v2.end(), m.begin())    // merge two vectors
#define reverseS(s) reverse(s.begin(), s.end())    // reverse the string
#define nSum(n) (n * (n + 1)) / 2                  // sum of first N positive integers
#define nmSum(n,m) ((n + m) * (m - n + 1)) / 2     // sum of positive integers from N to M (N <= M)


void solution()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        string s, original;
        cin >> original;

        s = original;

        asort(s);
        rmvDuplicates(s);

        map<char, char> m;

        ll i = 0;
        ll j = s.size() - 1;

        while(i <= j)
        {
            m[s[i]] = s[j];
            m[s[j]] = s[i];

            i++;
            j--;
        }

        string output = "";

        for(ll i = 0; i < n; i++)
        {
            output.push_back(m[original[i]]);
        }

        cout << output << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    solution();
    return 0;
}
