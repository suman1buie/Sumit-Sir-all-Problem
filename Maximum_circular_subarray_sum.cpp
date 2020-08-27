#include <bits/stdc++.h>
using namespace std;

int FindMaximumCirulterSum(vector<int>&arr){
	int size = arr.size(),temp_element = arr[0],max_element = arr[0],min_element = arr[0],temp_min = arr[0];
	//run Khadens algoritham
	for(int index = 0;index <size; index++){
		temp_element   = max(arr[index]+temp_element,arr[index]);
		temp_min       = min(arr[index]+temp_element,arr[index]);
		max_element    = max(max_element,temp_element);
		min_element    = min(min_element,temp_min);
	}
	return max(max_element,accumulate(begin(arr),end(arr),0)-min_element);
}

int main() {
	int n;cin>>n;
	vector<int>InputArray(n);
	for(int &no:InputArray)cin>>no;
	cout<<FindMaximumCirulterSum(InputArray)<<endl;
	return 0;
}