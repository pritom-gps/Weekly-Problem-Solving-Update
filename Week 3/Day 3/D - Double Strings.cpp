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
        cin >> n;
        vector<string> v(n);
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int i = 0;
        vector<int> v2;
        while (i < n)
        {
            int len = v[i].length();
            int p = 0;
            int q = len - 1;
            string a, b;
            a = v[i];
            bool flag = false;
            while (p < q)
            {
                b.push_back(a[p]);
                if (mp[b] >= 1)
                {
                    a.erase(a.begin(), a.begin() + p + 1);
                    if (mp[a] >= 1)
                    {
                        flag = true;
                        break;
                    }
                    else
                        a = v[i];
                }
                p++;
            }
            if (flag)
                v2.push_back(1);
            else
                v2.push_back(0);
            i++;
        }
        for (int s : v2)
            cout << s;
        cout << '\n';
    }
    return 0;
}
