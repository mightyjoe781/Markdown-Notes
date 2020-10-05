#include <bits/stdc++.h>
using namespace std;

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
		int c,n; cin>>c>>n;
		set<char> s;
		string wrd;
		cin >>wrd;
		for(int i =0 ; i<c; i++){
			if(s.find(wrd[i]) == s.end())
				s.insert(wrd[i]);
		}
		cout<<((n>=s.size())?n-s.size():0)<<endl;
			}
	

	return 0;
}