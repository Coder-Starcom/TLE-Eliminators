#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int ans[t];
    for (int i = 0; i < t; ++i)
    {
        int n, m;
        cin >> n >> m;

        string N, M;
        cin >> N >> M;

        for (int _ = 0; _ <= 5; ++_)
        {
            size_t foundPos1 = N.find(M);
            if (foundPos1 != std::string::npos)
            {
                ans[i] = _;
                break;
            }
            else
            {
                ans[i] = -1;
            }
            N += N;
        }
    }

    for (auto i : ans)
    {
        cout << i << endl;
    }
}