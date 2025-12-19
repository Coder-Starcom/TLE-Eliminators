#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int ans[t];
    for (int i = 0; i < t; ++i)
    {
        int n, x;
        cin >> n >> x;

        int A[n];
        for (int j = 0; j < n; ++j)
        {
            cin >> A[j];
        }

        int maxC = A[0];
        for (int j = 1; j < n; ++j)
        {
            maxC = max(maxC, A[j] - A[j - 1]);
        }
        maxC = max(maxC, 2 * (x - A[n - 1]));

        ans[i] = maxC;
    }

    for (auto i : ans)
    {
        cout << i << endl;
    }
}