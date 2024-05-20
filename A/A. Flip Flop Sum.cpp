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

        vector <long long> arr;

        long long i,x = 0;
        long long neg = 0;
        long long pos = 0;
        int state = 0;
        for(i = 0; i < arrayLength; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);

            if(temp > 0) pos++;
            else if(temp < 0) neg++;

            if(x < 0 && temp < 0 && !state){
                arr[i] *= -1;
                arr[i - 1] *= -1;
                state = 1;
            }
            else{
                x = temp;
            }
        }

        int sum = accumulate(arr.begin(),arr.end(),0);

        if(pos > 0 && neg == 0){
            arr[0] *= -1;
            arr[1] *= -1;
            sum = accumulate(arr.begin(),arr.end(),0);
        }

        cout << sum << endl;
    }
    return 0;
}

