#include<bits/stdc++.h>
using namespace std;
main(){
	int a,b;
	cin>>a>>b;
	B2:
	if(a!=b){
		a>b?a-=b:b-=a;
		goto B2;
	}
	cout<<endl<<a;
}
