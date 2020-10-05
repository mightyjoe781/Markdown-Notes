#include <bits/stdc++.h>
using namespace std;

pair<int,int> fixer(char x, pair<int,int> xcurr_pos){
	if(x == 'U')
		xcurr_pos.second++; 
	if(x == 'D')
		xcurr_pos.second--;
	if(x == 'L')
		xcurr_pos.first--;
	if(x == 'R')
		xcurr_pos.first++;
	return xcurr_pos;
}

int main(){

	ios_base::sync_with_stdio(false); //fast input and output
	cin.tie(NULL); //flush output
	//online judge config
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;cin>>n;
	string wrd; cin>>wrd;	
	set<pair<int,int>> s;
	pair<int,int> curr_pos = {0,0};
	s.insert(curr_pos);
	for (int i = 0; i < n; i+=2)
	{
		curr_pos = fixer(wrd[i],curr_pos);
		s.insert(curr_pos);
	}
	curr_pos={0,0};
	for (int i = 1; i < n; i+=2)
	{
		curr_pos = fixer(wrd[i],curr_pos);
		s.insert(curr_pos);
	}
	cout<<s.size();
	return 0;
}