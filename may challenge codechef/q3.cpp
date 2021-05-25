#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, N, x;
    cin >> T;
    while (T--)
    {
        cin >> N;
        set<int, greater<int>> s1;
        int rangeval = pow(2, N) - 1;
        for (x = 0; 2 * x <= rangeval; x++)
        {
            s1.insert(x);
        }
        cout << s1.size() % 1000000007;
    }
}