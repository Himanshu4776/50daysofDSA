#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, A, B;
        cin >> X >> A >> B;
        int Totalamount;
        Totalamount = (A + (100 - X) * B) * 10;
        cout << Totalamount << endl;
    }
}