#include <bits/stdc++.h>

#define ll long long
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

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

        ll i = 0;
        ll j = n - i - 1;

        if(s[i] == s[j])
        {
            cout << n << endl;
        }

        else
        {
            while(i < j)
            {
                if(s[i] == s[j])
                {
                    cout << j - i + 1<< endl;
                    break;
                }
                i++;
                j = n - i - 1;
            }

            if(i == j)
            {
                cout << 1 << endl;
            }

            else if(i > j)
            {
                cout << 0 << endl;
            }
        }
    }
}

int main()
{
    solution();
    return 0;
}
