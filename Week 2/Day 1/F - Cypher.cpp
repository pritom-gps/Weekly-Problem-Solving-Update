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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            string s;
            cin >> x >> s;
            for (int j = 0; j < x; j++)
            {
                if (s[j] == 'D')
                {
                    ar[i]++;
                    if (ar[i] == 10)
                        ar[i] = 0;
                }
                else
                {
                    ar[i]--;
                    if (ar[i] == -1)
                        ar[i] = 9;
                }
            }
            v.push_back(ar[i]);
        }
        for (int val : v)
            cout << val << " ";
        cout<<'\n';
    }
    return 0;
}
