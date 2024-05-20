#include <bits/stdc++.h>

#define ll long long
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solution(){
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        ll ones = 0;
        ll others = 0;
        ll casts = 0;

        for(ll i = 0; i < n; i++){
            ll temp;
            cin >> temp;

            if(temp == 1){
                ones++;
            }
            else{
                casts++;
                others++;
            }
        }
        if(ones % 2 == 0){
            casts += ones / 2;
        }
        else{
            casts += (ones / 2) + 1;
        }

        cout << casts << endl;
    }
}

int main(){
    solution();
    return 0;
}
