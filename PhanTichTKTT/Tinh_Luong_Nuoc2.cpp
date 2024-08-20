#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define NoCode main
const int mod = (int)1e9 + 1;
using namespace std;
NoCode()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l[n + 1], r[n + 1];
    l[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        l[i] = max(l[i - 1], a[i]);
    }
    r[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        r[i] = max(r[i + 1], a[i]);
    }
    int sum1 = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int z = min(l[i], r[i]) - a[i];
        if (z >= 0)
        {
            sum1 += z;
        }
    }
    cout << sum1;
}
