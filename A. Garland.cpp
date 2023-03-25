
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

ll random(ll low, ll high) {
    // Generate random number
    return rand() % (high - low + 1) + low;
}

void solution(){
    ll t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        if(s[0] == s[1] && s[1] == s[2] && s[2] == s[3])         cout << -1 << endl;
        else if(s[0] == s[1] && s[1] == s[2] || s[0] == s[1] && s[1] == s[3] || s[0] == s[2] && s[2] == s[3] || s[1] == s[2] && s[2] == s[3]){
            cout << 6 << endl;
        }
        else    cout << 4 << endl;

    }
}

int main(){
    solution();
    return 0;
}
