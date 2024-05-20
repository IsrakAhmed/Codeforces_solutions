
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

    string fb = "FBFFBFFBFBFFBFFBF";
    while(t--){
        ll k;
        cin >> k;

        string s;
        cin >> s;

        if(strstr(fb.c_str(),s.c_str())){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}
