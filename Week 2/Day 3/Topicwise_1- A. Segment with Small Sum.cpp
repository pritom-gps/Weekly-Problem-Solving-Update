#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, s;
    cin >> n >> s;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int l = 0, r = 0;
    long long sum = 0;
    int mx = 0;
    while (r < n)
    {
        sum += ar[r];
        if (sum <= s)
            mx = max(mx, r - l + 1);
        else
        {
            sum -= ar[l];
            l++;
        }
        r++;
    }
    cout << mx << '\n';
    return 0;
}
