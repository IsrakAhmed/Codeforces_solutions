#include <bits/stdc++.h>

using namespace std;

int main()
{

    int testCases;
    cin >> testCases;

    while(testCases--)
    {
        long long n;
        cin >> n;

        long long alice = 1;
        long long bob = 0;
        int state = 1;
        n--;

        for(long long i = 2; n > 0; i+=2)
        {
            if(i + (i + 1) > n)
            {
                if(state)
                {
                    bob += n;
                    state = 0;
                }
                else
                {
                    alice += n;
                    state = 1;
                }
                n = 0;
            }
            else
            {
                if(state)
                {
                    bob += i + (i + 1);
                    state = 0;
                }
                else
                {
                    alice += i + (i + 1);
                    state = 1;
                }
                n -= i + (i + 1);
            }
        }

        cout << alice << " " << bob << endl;
    }

    return 0;
}
