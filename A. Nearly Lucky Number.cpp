
/*

    Name        :   Israk Ahmed
    E-Mail      :   israkahmed7@gmail.com
    Institution :   University of Rajshahi

*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0
#define gcd __gcd


void solution()
{
    string s;
    cin >> s;

    ll lucky = 0;
    for(ll i = 0; i < s.size(); i++)
    {
        if(s[i] == '4' || s[i] == '7')
        {
            lucky++;
        }
    }

    if(lucky == 4 || lucky == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    solution();
    return 0;
}
