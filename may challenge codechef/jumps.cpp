#include <iostream>
#include <string>
using namespace std;
int main()
{
    double T;
    string result;
    cin >> T;
    while (T--)
    {
        double N, x, k;
        cin >> N >> x >> k;
        double tilesArrayElements = N + 1;
        for (double i = 0; i * k < tilesArrayElements; i++)
        {
            if (i * k == x)
            {
                /* code */
                result = "YES";
            }
            else if ((tilesArrayElements - i * k) == x)
            {
                /* code */
                result = "YES";
            }
            else
            {
                result = "NO";
            }
        }
        cout << result << endl;
    }
}