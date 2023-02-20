
/* Israk Ahmed */

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
        ll w,d,h;
        cin >> w >> d >> h;

        ll a,b,f,g;
        cin >> a >> b >> f >> g;

        ll dist1 = h + a + f + abs(b - g);
        ll dist2 = h + (w - a) + (w - f) + abs(b - g);
        ll dist3 = h + b + g + abs(a - f);
        ll dist4 = h + (d - b) + (d - g) + abs(a - f);
        cout << min(min(min(dist1,dist2),dist3),dist4) << endl;
    }
}

int main(){
    solution();
    return 0;
}
