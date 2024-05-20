#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string s;
        ll f = 1, size;
        cin >> s;

        size = (ll)s.size();

        vector < ll > first(size), second(size);

        for(ll i = 0 ; i < size ; i++)
        {
            ll digit = s[i] - '0';

            if(digit % 2 == 0)
            {
                first[i] = digit / 2;
                second[i] = digit / 2;
            }
            else
            {
                digit = digit / 2;

                if(f)
                {
                    first[i] = digit;
                    second[i] = digit + 1;
                    f = 0;
                }
                else
                {
                    first[i] = digit + 1;
                    second[i] = digit;
                    f = 1;
                }
            }
        }

        ll zero = 0;

        for(ll i = 0 ; i < size; i++)
        {
            if(first[i] != 0)
            {
                zero++;
                cout << first[i];
            }
            if(first[i] == 0 and zero)
                cout << first[i];
        }

        if(zero == 0)
            cout << 0;

        cout << " ";

        zero = 0;

        for(ll i = 0 ; i < size; i++)
        {
            if(second[i] != 0)
            {
                zero++;
                cout << second[i];
            }

            if(second[i] == 0 and zero)
                cout << second[i];
        }

        if(zero == 0)
            cout << 0;

        cout << endl;
    }

    return 0;
}

