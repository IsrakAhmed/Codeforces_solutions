#include <bits/stdc++.h>

using namespace std;

vector<int> generateSequence(int n,int s,int maximum)
{
    vector<int> result;
    int remainingSum = s;

    int i;
    for (i = 0; i < n - 1; i++)
    {
        int randomNum = rand() % maximum + 1;
        result.push_back(randomNum);
        remainingSum -= randomNum;
    }

    if(remainingSum > maximum)
    {

        result.push_back(maximum);
        remainingSum -= maximum;

        int i = 0;
        while(remainingSum > 0)
        {
            if(result[i] < maximum)
            {
                result[i]++;
                remainingSum--;
            }
            i++;
            if(i >= result.size())   i = 0;
        }
    }

    else if(remainingSum <= 0)
    {
        int i = 0;
        while(remainingSum <= 0)
        {
            if(result[i] > 1)
            {
                result[i]--;
                remainingSum++;
            }
            i++;
            if(i >= result.size())   i = 0;
        }
        result.push_back(remainingSum);
    }

    else
    {
        result.push_back(remainingSum);
    }

    return result;
}

int main()
{

    int testCases;
    cin >> testCases;

    while(testCases--)
    {
        int n,s,r;
        cin >> n >> s >> r;

        int left = s - r;

        n--;
        vector<int> sequence = generateSequence(n,r,left);

        int i;
        for (i = 0; i < sequence.size(); i++)
        {
            cout << sequence[i] << " ";
        }

        cout << left << endl;
    }

    return 0;
}
