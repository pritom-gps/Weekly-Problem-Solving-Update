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
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int val=v[i];
            if (mp[val] >= 1)
            {
                count++;
                while (mp[val] != 0)
                {
                    mp[val]--;
                    val +=1;
                }
            }
        }
        cout << count << '\n';
    }
    return 0;
}
