
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
    int t;
    cin >> t;

    while(t--){
        ll a,b;
        cin >> a >> b;

        ll n,m;
        cin >> n >> m;

        ll mincoins = 0;
        if(n <= m){
            mincoins = (min(a,b)) * n;
        }
        else{
            mincoins = ((n / (m + 1)) * m) * a;
            ll temp1 = (n - (((n / (m + 1)) * m) + (n / (m + 1)))) * a;
            ll temp2 = (n - (((n / (m + 1)) * m) + (n / (m + 1)))) * b;
            mincoins += min(temp1,temp2);

            mincoins = min(mincoins,(n * b));
        }

        cout << mincoins << endl;
    }
}

int main(){
    solution();
    return 0;
}
