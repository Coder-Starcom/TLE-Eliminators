#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int x;
    int ans = INT_MAX;
    for (int i = 0; i < t; ++i)
    {
        cin >> x;
        ans = min(ans, abs(x));
    }
    cout << ans;
}