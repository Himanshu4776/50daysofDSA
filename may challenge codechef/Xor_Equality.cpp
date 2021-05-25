#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int power(long long x, unsigned int y, int z)
{
    int result = 1;
    x = x % z;
    if (x == 0)
    {
        return 0;
    }
    while (y > 0)
    {
        if (y & 1)
        {
            result = (result * x) % z;
        }
        y = y >> 1;
        x = (x * x) % z;
    }
    return result;
}
int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;

        int x = N - 1;

        int res = power(2, x, 1000000007);

        cout << res << endl;
    }
    return 0;
}