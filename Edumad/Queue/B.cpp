#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	while(b) { int r = a%b; a= b;b=r;}
	return a;
}
stack<int> s;
int main(){

	ios_base::sync_with_stdio(false); //fast input and output
	cin.tie(NULL); //flush output
	//online judge config
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--){
		int n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		s.push(a[n]);
		
	}

	return 0;
}