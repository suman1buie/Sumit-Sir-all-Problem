#include <bits/stdc++.h>
using namespace std;

int MaximumLengthBitonicSubarray(vector<int>&arr){
	vector<int>pre(arr.size(),1),suff(arr.size(),1);
	for(int index = 1;index<arr.size();index++){
		if(arr[index-1]<arr[index])
			pre[index]=pre[index-1]+1;
	}
	for(int index = arr.size()-2;index>=0;index--){
		if(arr[index+1]<arr[index])
			suff[index]=suff[index+1] + 1; 
	}
	int ans = 0;
	for(int index = 0;index<arr.size();index++){
		ans = max(ans,suff[index]+pre[index]-1);
	}
	return ans;
}

int main() {
	int n;cin>>n;
	vector<int>InputArray(n);
	for(int &no:InputArray)cin>>no;
	cout<<MaximumLengthBitonicSubarray(InputArray)<<endl;
	return 0;
}