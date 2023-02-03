#include <bits/stdc++.h>

using namespace std;

int main(){

    string name = "codeforces";

    int t;
    cin >> t;

    while(t--){
        char letter;
        cin >> letter;

        if(name.find(letter) != string::npos){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
