#include <iostream>
using namespace std;
int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        char A[3][3];
        int cx = 0;
        int co = 0;
        int c_ = 0;
        int winx = 0, wino = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                char temp;
                cin >> A[i][j];
                temp = A[i][j];
                if (temp == 'X')
                {
                    cx++;
                }
                else if (temp == 'O')
                {
                    co++;
                }
                else if (temp == '_')
                {
                    c_++;
                }
            }
        }
        /* We got all the elements of game given in A */
        if (A[0][0] == 'X' && A[0][1] == 'X' && A[0][2] == 'X')
            winx++;
        if (A[1][0] == 'X' && A[1][1] == 'x' && A[1][2] == 'X')
            winx++;
        if (A[2][0] == 'X' && A[2][1] == 'X' && A[2][2] == 'X')
            winx++;
        if (A[0][0] == 'X' && A[1][0] == 'X' && A[2][0] == 'X')
            winx++;
        if (A[0][1] == 'X' && A[1][1] == 'X' && A[2][1] == 'X')
            winx++;
        if (A[0][2] == 'X' && A[1][2] == 'X' && A[2][2] == 'X')
            winx++;
        if (A[0][0] == 'X' && A[1][1] == 'X' && A[2][2] == 'X')
            winx++;
        if (A[2][0] == 'X' && A[1][1] == 'X' && A[0][2] == 'X')
            winx++;

        if (A[0][0] == 'O' && A[0][1] == 'O' && A[0][2] == 'O')
            wino++;
        if (A[1][0] == 'O' && A[1][1] == 'O' && A[1][2] == 'O')
            wino++;
        if (A[2][0] == 'O' && A[2][1] == 'O' && A[2][2] == 'O')
            wino++;
        if (A[0][0] == 'O' && A[1][0] == 'O' && A[2][0] == 'O')
            wino++;
        if (A[0][1] == 'O' && A[1][1] == 'O' && A[2][1] == 'O')
            wino++;
        if (A[0][2] == 'o' && A[1][2] == 'O' && A[2][2] == 'O')
            wino++;
        if (A[0][0] == 'O' && A[1][1] == 'O' && A[2][2] == 'O')
            wino++;
        if (A[2][0] == 'O' && A[1][1] == 'O' && A[0][2] == 'O')
            wino++;

        if ((wino == 1 && winx == 1) || (cx - co < 0) || (cx - co > 1))
        {
            cout << 3 << endl;
        }
        else if ((winx == 0 && wino == 0) || c_ == 9)
        {
            cout << 2 << endl;
        }
        else if ((winx == 1 && wino == 0) || (cx > 0))
        {
            cout << 1 << endl;
        }
        else if (winx == 0 && wino == 1 || (cx == 0))
        {
            cout << 1 << endl;
        }
        else if (winx == 2 && wino == 0 && c_ == 0)
        {
            cout << 1 << endl;
        }
        else if (winx == 0 && wino == 0 && c_ > 0)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
    return 0;
}