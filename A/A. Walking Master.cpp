
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
        ll a,b,c,d;
        cin >> a >> b >> c >> d;

        if(a == c && b == d)
        {
            cout << 0 << endl;
        }
        else if(b == d)
        {
            if(a < c)
            {
                cout << -1 << endl;
            }
            else
            {
                ll temp;
                if((a < 0 && c > 0) || (a > 0 && c < 0))  temp = abs(a) + abs(c);
                else                                      temp = abs(c - a);
                cout << temp << endl;
            }
        }
        else if(a == c)
        {
            if(b > d)
            {
                cout << -1 << endl;
            }
            else
            {
                ll temp;
                if((b < 0 && d > 0) || (b > 0 && d < 0))  temp = abs(b) + abs(d);
                else                                      temp = abs(d - b);

                b = d;
                a += temp;
                if(a < c)
                {
                    cout << -1 << endl;
                }
                else
                {
                    ll temp2;
                    if((a < 0 && c > 0) || (a > 0 && c < 0))  temp2 = abs(a) + abs(c);
                    else                                      temp2 = abs(c - a);
                    cout << temp2 + temp << endl;
                }
            }
        }
        else if(b > d)
        {
            cout << -1 << endl;
        }
        else if(b < d)
        {
            ll temp;
            if((b < 0 && d > 0) || (b > 0 && d < 0))  temp = abs(b) + abs(d);
            else                                      temp = abs(d - b);

            b = d;
            a += temp;
            if(a < c)
            {
                cout << -1 << endl;
            }
            else
            {
                ll temp2;
                if((a < 0 && c > 0) || (a > 0 && c < 0))  temp2 = abs(a) + abs(c);
                else                                      temp2 = abs(c - a);
                cout << temp2 + temp << endl;
            }
        }
    }
}

int main()
{
    solution();
    return 0;
}
