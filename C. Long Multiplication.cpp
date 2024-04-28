
/*

    Name        :   Israk Ahmed
    E-Mail      :   israkahmed7@gmail.com
    Github      :   github.com/IsrakAhmed
    Institution :   University of Rajshahi

*/

#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long
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
#define endl "\n"


void solution()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string x,y;
        cin >> x >> y;

        string tempx,tempy;

        ll i = -1;

        while(1)
        {
            i++;

            tempx.push_back(max(x[i],y[i]));
            tempy.push_back(min(x[i],y[i]));

            if(x[i] != y[i])
            {
                break;
            }
        }


        for(i++; i < x.size(); i++)
        {
            tempx.push_back(min(x[i],y[i]));
            tempy.push_back(max(x[i],y[i]));
        }

        printf("%s\n",tempx.c_str());
        printf("%s\n",tempy.c_str());
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}
