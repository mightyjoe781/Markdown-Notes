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
    int x;
    int i = 0;
    vector<int> v;
    while(cin>>x){
		v.push_back(x);
    }
    map<int,int> m;
    for(auto x : v)
    	m[x]++;
    for ( auto x : m ){
        if(x.second >1)
        	cout<<x.first<<" ";
    }
	return 0;
}