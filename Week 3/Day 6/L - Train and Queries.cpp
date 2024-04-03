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
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
        {
            mp[v[i]].push_back(i);
        }
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            if (mp[x].empty() || mp[y].empty())
                cout << "NO" << '\n';
            else if (mp[x].front() < mp[y].back())
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
    return 0;
}
