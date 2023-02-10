#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long testCases;
    cin >> testCases;

    while(testCases--)
    {
        long long n;
        cin >> n;

        long long arr[n];
        long long two = 0;
        vector <long long> twos;
        for(long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 2)
            {
                two++;
                twos.push_back(i + 1);
            }
        }

        if(two == 0)
        {
            cout << 1 << endl;
        }

        else if(two % 2 != 0)
        {
            cout << -1 << endl;
        }

        else
        {
            cout << twos[(twos.size() / 2) - 1] << endl;
        }

    }

    return 0;
}
