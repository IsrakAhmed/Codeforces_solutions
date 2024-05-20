#include <bits/stdc++.h>

using namespace std;

int main(){

    int testCases;
    cin >> testCases;

    while(testCases--){
        long long n;
        cin >> n;

        if(n % 2 != 0){
            cout << -1 << endl;
        }
        else{
            cout << 1 << " " << n/2 << endl;
        }
    }

    return 0;
}
