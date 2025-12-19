#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string ans[t];

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;

        if (n % 3 == 0)
        {
            ans[i] = "Second";
        }
        else
        {
            ans[i] = "First";
        }
    }

    for (auto i : ans)
    {
        cout << i << endl;
    }
}