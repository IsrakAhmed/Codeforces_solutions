#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long testCases;

    cin >> testCases;

    while(testCases--)
    {

        long long arrayLength;

        cin >> arrayLength;

        long long i;
        long long arr[arrayLength],prsum[arrayLength];

        for(i = 0; i < arrayLength; i++)
        {
            cin >> arr[i];
        }

        prsum[0] = arr[0];
        for(i = 1; i < arrayLength; i++)
        {
            prsum[i] = prsum[i - 1] + arr[i];
        }

        long long sum = prsum[arrayLength - 1];
        long long maxGcd = 1;

        for(i = 0; i < arrayLength - 1; i++)
        {
            maxGcd = max(__gcd(prsum[i],sum - prsum[i]),maxGcd);
        }

        cout << maxGcd <<endl;

    }

    return 0;
}
