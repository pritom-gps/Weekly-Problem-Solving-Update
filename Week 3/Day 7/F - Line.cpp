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
        string s;
        cin >> n >> s;
        vector<long long> v;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                v.push_back((n - 1 - i) - i);
                sum += i;
            }
            else
            {
                v.push_back(i - (n - 1 - i));
                sum += n - 1 - i;
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        for (auto val : v)
        {
            if (val > 0)
            {
                cout << sum + val << " ";
                sum = sum + val;
            }
            else
                cout << sum << " ";
        }
        cout << '\n';
    }
    return 0;
}
