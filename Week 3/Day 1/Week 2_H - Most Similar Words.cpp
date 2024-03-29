#include <bits/stdc++.h>
using namespace std;
int n, m;
int difference(string a, string b)
{
    int diff = 0;
    for (int i = 0; i < m; i++)
    {
        diff += abs(a[i] - b[i]);
    }
    return diff;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int mn = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int result = difference(v[i], v[j]);
                if (result < mn)
                    mn = result;
            }
        }
        // for (string s : v)
        //     cout << s << endl;
        cout << mn << endl;
    }

    return 0;
}
