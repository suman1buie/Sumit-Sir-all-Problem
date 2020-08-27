#include <bits/stdc++.h>
using namespace std;

int FindEquilibrium_index_of_an_array(vector<int>&arr){
	vector<int>prefix_array(arr.size()+1);
	for(int index=1;index<prefix_array.size();index++)prefix_array[index] = prefix_array[index-1] + arr[index-1];
	int ans = 0;
	for(int index=2;index<prefix_array.size();index++){
		if(prefix_array[index-1]==(prefix_array[prefix_array.size()-1]-prefix_array[index])){
			return index-1;
		}
	}
	return -1;
}

int main(){
	int n;cin>>n;
	vector<int> inputArray(n);
	for(int &no:inputArray)cin>>no;
	cout<<FindEquilibrium_index_of_an_array(inputArray)<<endl;
	return 0;
}