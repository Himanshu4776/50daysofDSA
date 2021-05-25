#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        string str1, str2, str3;
        cin >> str1 >> str2 >> str3;
        int Xcount = 0;
        int Ocount = 0;
        int dashcount = 0;
        int winx = 0;
        int wino = 0;
        char Arr[9];
        for (char i = 0; i < 3; i++)
        {
            /* code */
            Arr[i] = str1[i];
            Arr[i + 3] = str2[i];
            Arr[i + 6] = str3[i];
        }

        for (int x = 0; x < 9; x++)
        {
            if (Arr[x] == '_')
            {
                dashcount += 1;
            }
            if (Arr[x] == 'X')
            {
                Xcount += 1;
            }
            if (Arr[x] == 'O')
            {
                Ocount += 1;
            }
        } /* Here now we got Xcount, O count and 0 dash counts*/
        if ((dashcount == 0) && (Xcount > Ocount + 1) || (Ocount > Xcount))
        {
            /* Invalid conditions on counts */
            cout << 3 << endl;
        }
        else if ((dashcount == 0) && (Xcount = Ocount + 1))
        {
            /* Either be Draw or X wins */
            cout << 1 << endl;
        }
        else if ((dashcount == 0) && (Xcount == Ocount))
        {
            /* O wins */
            cout << 1 << endl;
        }
        /* Here now we got Xcount, O count and non-zero dash counts: Either odd or even*/
        if ((dashcount & 1) == 0)
        {
            if (Xcount != Ocount)
            {
                cout << 3 << endl;
            }
            if (Xcount == Ocount)
            {
                cout << 2 << endl;
            }
        }
        else if ((dashcount & 1) != 0)
        {
            if (Xcount != Ocount + 1)
            {
                cout << 3 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}
