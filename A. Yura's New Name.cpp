
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
        string s;
        cin >> s;

        ll len = s.size();
        ll countt = 0;

        for(ll i = 0; i < len; i++)
        {
            char temp = s[i];

            if(temp == '_')
            {
                if(i == 0)
                {
                    countt++;
                }
                if(i == len - 1)
                {
                    countt++;
                }
                if(temp == s[i - 1])
                {
                    countt++;
                }
            }
            else if(len == 1) countt = 1;
        }
        cout << countt << nl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solution();
    return 0;
}
