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
        vector<int> v;
        int l = 0, r = 0;
        while (l < n && r < m)
        {
            if (ar1[l] < ar2[r] && l < n)
            {
                v.push_back(ar1[l]);
                l++;
                if (l == n && r != m)
                {
                    for (int i = r; i < m; i++)
                        v.push_back(ar2[i]);
                }
            }
            else
            {
                v.push_back(ar2[r]);
                r++;
                if (r == m && l != n)
                {
                    for (int i = l; i < n; i++)
                        v.push_back(ar1[i]);
                }
            }
        }
        for (int val : v)
            cout << val << " ";
            
        return 0;
    }
