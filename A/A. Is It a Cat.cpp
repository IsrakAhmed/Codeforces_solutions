
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
    ll t;
    cin >> t;

    string meo = "meow";

    while(t--)
    {
        ll len;
        cin >> len;

        string s;
        cin >> s;

        transform(s.begin(),s.end(),s.begin(),::tolower);

        ll i = 0;
        ll j = 0;

        bool state = false;

        while(1)
        {
            if(len < 4)
            {
                break;
            }

            if(s[i] == meo[j])
            {

                if(i == len - 1 && j == 3)
                {
                    state = true;
                    break;
                }

                if(j < 3)
                {
                    j++;
                }

                i++;
            }
            else
            {
                if(s[i] == s[i - 1])
                {
                    i++;
                }
                else
                {
                    break;
                }
            }
        }

        if(state)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}


int main()
{
    solution();
    return 0;
}
