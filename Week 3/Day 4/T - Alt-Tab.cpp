#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    unordered_map<string, int> mp;
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[v[i]] == 0)
        {
            mp[v[i]]++;
            int len = v[i].size();
            cout << v[i].substr(len - 2);
        }
    }
    return 0;
}
