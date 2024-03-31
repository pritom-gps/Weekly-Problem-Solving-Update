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
        vector<int> v(n);
        bool flag = true;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        set<int> st;
        for (int i = 0; i < n / 2; i++)
        {
            if (v[i] != v[n - 1 - i])
            {
                st.insert(v[i]);
                st.insert(v[n - 1 - i]);
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << '\n';
        else
        {
            for (auto val : st)
            {
                int l = 0, r = n - 1;
                flag = true;
                while (l < r)
                {
                    if (v[l] == v[r])
                    {
                        l++;
                        r--;
                    }
                    else if (v[l] == val)
                        l++;
                    else if (v[r] == val)
                        r--;
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    cout << "YES" << '\n';
                    break;
                }
            }
            if (!flag)
                cout << "NO" << '\n';
        }
    }
    return 0;
}
