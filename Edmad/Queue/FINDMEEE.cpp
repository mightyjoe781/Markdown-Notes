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
		int n; cin>>n;
		set<string> s;
		for(int i =0 ; i<n ; i++){
			string temp; cin>>temp;
			if(s.find(temp) != s.end()){
			cout<<temp<<endl;
			}
			s.insert(temp);
		}
	}
	

	return 0;
}