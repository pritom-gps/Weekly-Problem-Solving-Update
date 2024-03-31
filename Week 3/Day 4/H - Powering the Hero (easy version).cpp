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
        priority_queue<int> pq;
        int i = 0;
        long long power = 0;
        while (i < n)
        {
            if (ar[i] != 0)
                pq.push(ar[i]);
            else
            {
                if (!pq.empty())
                {
                    power += pq.top();
                    pq.pop();
                }
            }
            i++;
        }
        cout << power << '\n';
    }
    return 0;
}
