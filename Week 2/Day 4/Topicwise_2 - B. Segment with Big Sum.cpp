#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long s;
    cin >> n >> s;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int l = 0, r = 0;
    long long sum = 0;
    int mn = INT_MAX;
    while (r < n)
    {
        sum += ar[r];
        if (sum >= s)
        {
            while (sum >= s && l <= r)
            {
                mn = min(mn, r - l + 1);
                sum -= ar[l];
                l++;
            }
        }
        r++;
    }
    if (mn == INT_MAX)
        cout << -1 << '\n';
    else
        cout << mn << '\n';

    return 0;
}
