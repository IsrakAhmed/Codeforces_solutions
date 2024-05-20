#include <bits/stdc++.h>

using namespace std;

int main()
{

    int candyX = 1;
    int candyY = 1;

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        char direction[n];
        cin >> direction;

        int x = 0;
        int y = 0;
        int state = 0;

        for(int i = 0; i < n; i++)
        {

            if(direction[i] == 'U')
            {
                y++;
            }
            else if(direction[i] == 'D')
            {
                y--;
            }
            else if(direction[i] == 'L')
            {
                x--;
            }
            else if(direction[i] == 'R')
            {
                x++;
            }

            if(candyX == x && candyY == y){
                state = 1;
                break;
            }
        }

        if(state){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
