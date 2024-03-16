#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long ar[n];
    long long mn = 1e18;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
        if (ar[i] % 2 != 0 && ar[i] < mn)
            mn = ar[i];
    }
    if (sum % 2 == 0)
        cout << sum << '\n';
    else
        cout << sum - mn << '\n';

    return 0;
}
