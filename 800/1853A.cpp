#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans[t];
    for (int i = 0; i < t; ++i)
    {
        int x;
        cin >> x;
        int A[x];
        for (int j = 0; j < x; ++j)
        {
            cin >> A[j];
        }

        int min_d = INT_MAX;
        for (int j = 0; j < x - 1; ++j)
        {
            if (A[j + 1] - A[j] < min_d)
            {
                min_d = A[j + 1] - A[j];
            }
        }
        if (min_d < 0)
            ans[i] = 0;
        else
            ans[i] = floor(min_d / 2) + 1;
    }

    for (auto i : ans)
    {
        cout << i << endl;
    }
}