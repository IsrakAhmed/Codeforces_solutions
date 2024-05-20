
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
#define endl "\n"


void solution()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll a,b,c;
        cin >> a >> b >> c;

        ll totalTents = 0;
        bool state = true;

        totalTents += a;

        if(b % 3 == 0){
            totalTents += b / 3;
        }
        else if((b + 1) % 3 == 0 && c >= 1){
            totalTents += (b + 1) / 3;
            c -= 1;
        }
        else if((b + 2) % 3 == 0 && c >= 2){
            totalTents += (b + 2) / 3;
            c -= 2;
        }
        else{
            state = false;
        }

        if(c % 3 == 0){
            totalTents += c / 3;
        }

        else if(c % 3 != 0){
            totalTents += (c / 3) + 1;
        }

        if(state){
            printf("%lld\n", totalTents);
        }
        else{
            printf("-1\n");
        }
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
