#include <bits/stdc++.h>
#define int long long
using namespace std;
main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >>  a[i];
	}
	sort(a, a + n);
	int x = a[n-2];
	int t=0;
	for(int i=0; i<n-2; i++){
			t += x - a[i];	
	}
	cout << t;
}

