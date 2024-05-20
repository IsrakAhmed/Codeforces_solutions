
/* Israk Ahmed */

#include <bits/stdc++.h>

#define ll long long
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0
#define gcd __gcd

using namespace std;

ll random(ll low, ll high)
{
    // Generate random number
    return rand() % (high - low + 1) + low;
}

bool checkAgain(vector <ll> v,ll n)
{
    ll presum = 0;
    bool state = false;

    for(int i = 0; i < n; i++)
    {
        ll temp = v[i];
        if(presum == temp)
        {
            state = true;
        }

        presum += temp;
    }

    return state;
}

vector <ll> rearr(vector <ll> v,ll n)
{

    for(int i = 1; i < n - 1; i++)
    {
        if(v[i] == v[i - 1])
        {
            ll temp = v[i];
            v[i] = v[i + 1];
            v[i + 1] = temp;
        }
    }

    return v;
}

void solution()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector <ll> v;
        ll presum = 0;
        bool state = false;

        for(int i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;

            if(presum == temp)
            {
                state = true;
            }

            presum += temp;
            v.pb(temp);
        }

        if(state)
        {
            sort(dsort);
            if(!checkAgain(v,n))
            {
                cout << "YES" << endl;
                for(auto i : v)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
            else
            {
                bool yes = false;
                for(int i = 0; i < n; i++){
                    v = rearr(v,n);

                    if(!checkAgain(v,n)){
                        yes = true;
                        break;
                    }
                }

                if(yes)
                {
                    cout << "YES" << endl;
                    for(auto i : v)
                    {
                        cout << i << " ";
                    }
                    cout << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }

            }


        }
        else
        {
            cout << "YES" << endl;
            for(auto i : v)
            {
                cout << i << " ";
            }
            cout << endl;
        }

    }
}

int main()
{
    solution();
    return 0;
}
