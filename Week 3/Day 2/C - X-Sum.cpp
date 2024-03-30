#include <bits/stdc++.h>
using namespace std;
int n, m;
bool valid(int ci, int cj)
{
    if (ci < 0 || ci >= n || cj < 0 || cj >= m)
        return false;
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
        cin >> n >> m;
        int mat[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        long long mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                long long sum = 0;
                sum += mat[i][j];
                int uri = i - 1;
                int urj = j + 1;
                while (valid(uri, urj))
                {
                    sum += mat[uri][urj];
                    uri = uri - 1;
                    urj = urj + 1;
                }
                int uli = i - 1;
                int ulj = j - 1;
                while (valid(uli, ulj))
                {
                    sum += mat[uli][ulj];
                    uli = uli - 1;
                    ulj = ulj - 1;
                }
                int dli = i + 1;
                int dlj = j - 1;
                while (valid(dli, dlj))
                {
                    sum += mat[dli][dlj];
                    dli = dli + 1;
                    dlj = dlj - 1;
                }
                int dri = i + 1;
                int drj = j + 1;
                while (valid(dri, drj))
                {
                    sum += mat[dri][drj];
                    dri = dri + 1;
                    drj = drj + 1;
                }
                if (sum > mx)
                    mx = sum;
            }
        }
        cout << mx << '\n';
    }
    return 0;
}
