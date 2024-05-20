
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

bool found(vector<ll> v, ll target,ll n)
{
    for(ll i = 0; i < n; i++)
    {
        if(v[i] == target)
        {
            return true;
        }
    }
    return false;
}

void solution()
{
    ll p,n;
    cin >> p >> n;

    vector<ll> v;
    ll ind = -1;
    bool state = true;
    for(ll i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;

        temp = temp % p;

        if(found(v,temp,i) && state)
        {
            ind = i;
            state = false;
        }

        v.pb(temp);
    }

    if(ind != -1)
    {
        cout << ind + 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    solution();
    return 0;
}
