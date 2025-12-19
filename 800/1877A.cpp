#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int ans[t];

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        int x;
        int sum = 0;
        for (int j = 0; j < n - 1; ++j)
        {
            cin >> x;
            sum += x;
        }
        ans[i] = -sum;
    }
    for (auto i : ans)
    {
        cout << i << endl;
    }
}