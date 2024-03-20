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
        int carry = 1;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] <= carry)
                carry++;
            else
            {
                ans += ar[i] - carry;
                carry += ar[i] - carry + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
