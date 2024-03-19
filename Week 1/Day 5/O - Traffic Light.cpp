#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        set<int> green;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'g')
                green.insert(i + 1);
        }

        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                auto LB = green.lower_bound(i + 1);
                if (LB != green.end())
                {
                    int gap = *LB - (i + 1);
                    ans = max(ans, gap);
                }
                else
                {
                    int gap = n - (i + 1) + *green.begin();
                    ans = max(ans, gap);
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
