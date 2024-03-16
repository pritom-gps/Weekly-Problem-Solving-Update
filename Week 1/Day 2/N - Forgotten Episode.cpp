#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    int ar[n-1];
    long long sum1 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> ar[i];
        sum1 += ar[i];
    }
    long long sum2 = (n * (n + 1)) / 2;
    cout << sum2 - sum1 << '\n';

    return 0;
}
