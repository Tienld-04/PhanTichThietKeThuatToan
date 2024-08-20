#include <bits/stdc++.h>
// test: 4
// output:	1 : (1,2) (2,4) (3,1) (4,3)
//  2 : (1,3) (2,1) (3,4) (4,2)
using namespace std;
map<int, bool> C, A, P;
// C2
// int A[1000]={},Z[2000],*C=Z+1000,P[2000]={};
int d = 0;
void TRY(int *x, int k, int n) {
    if (k - 1 == n) {
        cout << "\n"
             << ++d << " : ";
        for (int i = 1; i <= n; i++)
            cout << "(" << i << "," << x[i] << ") ";
        return;
    }
    for (int t = 1; t <= n; t++)
        if (A[t] == 0 && C[k - t] == 0 && P[k + t] == 0) {
            x[k] = t;
            A[t] = C[k - t] = P[k + t] = 1;
            TRY(x, k + 1, n);
            A[t] = C[k - t] = P[k + t] = 0;
        }
}
int main() {
    int n, x[100];
    cin >> n;
    TRY(x, 1, n);
}