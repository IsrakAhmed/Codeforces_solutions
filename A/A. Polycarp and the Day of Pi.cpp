#include <bits/stdc++.h>

using namespace std;

int main()
{

    string pi = "314159265358979323846264338327";

    int testCases;
    cin >> testCases;

    while(testCases--)
    {

        string digits;
        cin >> digits;

        int digitsSize = digits.size();

        int i;
        for(i = 0; i < digitsSize; i++)
        {
            if(pi[i] != digits[i])
            {
                break;
            }
        }

        cout << i << endl;

    }

    return 0;
}
