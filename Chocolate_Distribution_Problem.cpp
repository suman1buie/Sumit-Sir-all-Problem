#include <bits/stdc++.h>
using namespace std;

int minChocolateDistribution(vector<int> &arr,int no_of_student){
	sort(begin(arr),end(arr));
	int j = 0,ans = INT_MAX;
	for(int i=no_of_student-1;i<arr.size();i++){
		ans = min((arr[i]-arr[j]),ans);
		j++;
	}
	return ans;
}


int main(){
	int n;cin>>n;
	vector<int> inputArray(n);
	for(int &no:inputArray)cin>>no;
	int m;cin>>m;
	cout<<minChocolateDistribution(inputArray,m)<<endl;
	return 0;
}