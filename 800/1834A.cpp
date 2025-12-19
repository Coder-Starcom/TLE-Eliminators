#include <iostream>
using namespace std;

int main()
{
    int t, x;
    cin >> t;

    int ans[t] = {0};

    for (int i = 0; i < t; ++i)
    {
        cin >> x;
        int A[x];

        int n, p = 0;
        for (int j = 0; j < x; ++j)
        {
            cin >> A[j];
            if (A[j] > 0)
                p++;
        }
        n = x - p;

        int steps = 0;
        while (n > p)
        {
            n--;
            p++;
            steps++;
        }

        if (n % 2 == 1)
        {
            steps++;
        }
        ans[i] = steps;
    }
    for (auto i : ans)
    {
        cout << i << endl;
    }
}