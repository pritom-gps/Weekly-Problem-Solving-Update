    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
     
        int n, m;
        cin >> n >> m;
        int ar1[n], ar2[m];
        for (int i = 0; i < n; i++)
            cin >> ar1[i];
        for (int i = 0; i < m; i++)
            cin >> ar2[i];
        int l = 0, r = 0;
        int ans = 0;
        while (l < n && r < m)
        {
            if (ar1[l] < ar2[r])
            {
                ans++;
                l++;
                if (l == n)
                    for (int i = r; i < m; i++)
                        cout << ans << " ";
            }
            else
            {
                cout << ans << " ";
                r++;
            }
        }
        return 0;
    }
