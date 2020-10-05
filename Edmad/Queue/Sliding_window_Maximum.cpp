// Sliding Window Maximum is used to find the maximum of all subarrays of size k
#include <bits/stdc++.h>
using namespace std;
//This solution is based of Queue
void Kmax(int arr[], int n,int k){
	deque<int> Qi(k);
	int i;
	for(i=0;i<k;++i){
		while((!Qi.empty()) && arr[i]>= arr[Qi.back()])
			Qi.pop_back();

		Qi.push_back(i);
	}	//now process the remianing elements
	for(;i<n;i++){

		cout<<arr[Qi.front()]<<" ";

		while(!(Qi.empty()) && Qi.front()<=i-k)
			Qi.pop_front();

		while((!Qi.empty()) && arr[i]>= arr[Qi.back()])
			Qi.pop_back();

		Qi.push_back(i);		
	}

	cout<<arr[Qi.front()];
}
int main(){

	ios_base::sync_with_stdio(false); //fast input and output
	cin.tie(NULL); //flush output
	//online judge config
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n ; cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	//Now to call the actual function
	Kmax(arr,n,3);

	return 0;
}