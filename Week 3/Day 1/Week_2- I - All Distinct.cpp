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
        cin>>n;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        int r = n - st.size();
        if (r % 2 == 0)
            cout << st.size() << '\n';
        else
            cout << st.size() - 1 << '\n';
        // cout << st.size() << '\n';
    }
    return 0;
}
