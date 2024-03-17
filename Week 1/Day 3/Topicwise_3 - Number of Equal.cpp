#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int ar1[n], ar2[m];
    for (int i = 0; i < n; i++)
        cin >> ar1[i];
    for (int i = 0; i < m; i++)
        cin >> ar2[i];

    int l = 0, r = 0;
    long long ans = 0;
    while (l < n && r < m)
    {
        long long cnt1 = 0;
        long long cnt2 = 0;
        int current = ar1[l];
        while (ar1[l] == current && l < n)
        {
            cnt1++;
            l++;
        }
        while (current > ar2[r] && r < m)
        {
            r++;
        }
        while (ar2[r] == current && r < m)
        {
            cnt2++;
            r++;
        }
        ans = ans + (cnt1 * cnt2);
    }
    cout << ans << endl;
    return 0;
}
