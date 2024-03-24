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
        int count = 0;
        queue<int> p;
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                p.push(i);
            else
                q.push(i);
        }
        while (!p.empty() && !q.empty())
        {
            if (p.front() < q.front())
            {
                count += 2;
                p.pop();
                q.pop();
            }
            else
                q.pop();
        }
        int result = (n - count) / 2;
        cout << result << '\n';
    }
    return 0;
}
