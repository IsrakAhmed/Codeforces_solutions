#include <bits/stdc++.h>

using namespace std;

int main()
{

    int testCases;
    cin >> testCases;

    while(testCases--)
    {
        int type1,type2,type3,type4;
        cin >> type1 >> type2 >> type3 >> type4;

        if(type1 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << type1 + 2 * min(type2,type3) + min(type1 + 1,abs(type2 - type3) + type4) << endl;
        }
    }

    return 0;
}
