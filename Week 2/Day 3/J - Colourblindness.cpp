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
        string a, b;
        cin >> n >> a >> b;
        queue<int> p;
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'R')
                p.push(i);
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 'R')
                q.push(i);
        }
        while (!p.empty() && !q.empty())
        {
            if (p.front() != q.front())
                break;
            else
            {
                p.pop();
                q.pop();
            }
        }
        if (p.empty() && q.empty())
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
        }
    return 0;
}
