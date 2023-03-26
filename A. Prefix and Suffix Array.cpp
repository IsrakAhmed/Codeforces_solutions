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

ll random(ll low, ll high)
{
    // Generate random number
    return rand() % (high - low + 1) + low;
}

void solution()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        string s,a,b;
        cin.ignore();
        getline(cin, s);

        ll i = 0;
        ll sub = 0;
        while(true)
        {
            ll cnt = 0;
            string temp1;
            while(sub == 0)
            {
                if(cnt == n - 1 && (s[i] == ' ' || i == s.size()))
                {
                    a = temp1;
                    sub = 1;
                    break;
                }
                if(s[i] == ' ')
                {
                    cnt = 0;
                    temp1.clear();
                }
                else
                {
                    temp1.pb(s[i]);
                    cnt++;
                }
                i++;
            }
            string temp2;
            cnt = 0;
            i++;
            while(sub == 1)
            {
                if(cnt == n - 1 && (s[i] == ' ' || i == s.size()))
                {
                    b = temp2;
                    break;
                }
                if(s[i] == ' ')
                {
                    cnt = 0;
                    temp2.clear();
                }
                else
                {
                    temp2.pb(s[i]);
                    cnt++;
                }
                i++;
            }
            break;
        }

        a += b;
        b = a;

        bool state = true;
        ll k = b.size() - 1;
        for(ll i = 0; i < a.size(); i++)
        {
            if(a[i] != b[k])
            {
                state = false;
                cout << "NO" << endl;
                break;
            }
            k--;
        }
        if(state)
        {
            cout << "YES" << endl;
        }
    }
}

int main()
{
    solution();
    return 0;
}
