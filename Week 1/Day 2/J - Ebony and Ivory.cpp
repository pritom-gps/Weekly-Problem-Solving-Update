#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a[2], c;
    cin >> a[0]>>a[1]>>c;
    int dp[3][c + 1];
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (a[i - 1] <= j)
                dp[i][j] = max(a[i - 1] + dp[i][j - a[i - 1]], dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    if (dp[2][c] == c)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';

    return 0;
}
