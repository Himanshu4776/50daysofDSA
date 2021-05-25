#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        unsigned long long N, M;
        cin >> N >> M;
        vector<unsigned long long> Arr(N + 1, 1);
        unsigned long long count = 0;
        for (unsigned long long int i = 2; i <= N; i++)
        {
            /* code */
            unsigned long long a = M % i;
            count = count + Arr[a];
            for (unsigned long long j = a; i <= N; j += i)
            {
                /* code */
                Arr[j]++;
            }
        }
        cout << count << endl;
    }
    return 0;
}