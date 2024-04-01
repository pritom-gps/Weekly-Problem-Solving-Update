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
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        unordered_map<int, int> mp;
        int count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (mp[ar[i]] == 0)
            {
                mp[ar[i]]++;
                count++;
            }
            else
                break;
        }
        cout << n - count << '\n';
    }
    return 0;
}
