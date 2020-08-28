#include <bits/stdc++.h>
using namespace std;

int LSAWENZO(vector<int>&arr){
	unordered_map<int,int>tracker;
	int sum = 0,answer = 0;
	tracker[0] = -1;
	for(int index = 0;index<arr.size();index++){
		sum+= arr[index]?1:-1;
		if(tracker.find(sum)!=end(tracker))
			answer = max(answer,index-tracker[sum]);
		else
			tracker[sum] = index;
	}
	return answer;
}

int main() {
	int n;cin>>n;
	vector<int>InputArray(n);
	for(int &no:InputArray)cin>>no;
	cout<<LSAWENZO(InputArray)<<endl;
	return 0;
}