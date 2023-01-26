#include <bits/stdc++.h>

using namespace std;

int main()
{

    int testCase;

    cin >> testCase;

    while(testCase--)
    {

        int arrayLength;

        cin >> arrayLength;

        int i;
        int arr[arrayLength];
        vector <int> odds,evens;

        for(i = 0; i < arrayLength; i++)
        {
            cin >> arr[i];

            if(arr[i] % 2 == 0){
                evens.push_back(i + 1);
            }
            else{
                odds.push_back(i + 1);
            }
        }

        if(odds.size() >= 3){
            cout << "YES" << endl;
            cout << odds[0] << " " << odds[1] << " " << odds[2] << endl;
        }

        else if(odds.size() >= 1 && evens.size() >= 2){
            cout << "YES" << endl;
            cout << evens[0] << " " << evens[1] << " " << odds[0] << endl;
        }

        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}

