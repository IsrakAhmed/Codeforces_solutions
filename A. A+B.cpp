
/*

    Name        :   Israk Ahmed
    E-Mail      :   israkahmed7@gmail.com
    Institution :   University of Rajshahi

*/

#include <bits/stdc++.h>

#define ll long long
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0
#define gcd __gcd

using namespace std;

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

        ll a = s[0] - '0';
        ll b = s[2] - '0';

        cout << a + b << endl;
    }
}

int main(){
    solution();
    return 0;
}
