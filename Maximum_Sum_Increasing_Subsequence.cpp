#include <bits/stdc++.h>
using namespace std;

int MSIS(vector<int>&arr,int till,int max_index,vector<vector<int>>&dp){
	if(arr.size()==till||arr.size()==max_index){
		return 0;
	}
	if(dp[till][max_index])return dp[till][max_index];
	//I have two options now  1.include or 2. not include
	//if I want to include need to check one condition is it lesser then max_element till now or not
	int sum1 = 0,sum2 = 0;
	if(arr[max_index]<=arr[till])
		sum1 = arr[till] + MSIS(arr,till+1,till,dp);
	
	sum2 = MSIS(arr,till+1,max_index,dp);
	return dp[till][max_index] = max(sum1,sum2);
}


int main(){
	int n;cin>>n;
	vector<int> inputArray(n);
	for(int &no:inputArray)cin>>no;

	vector<vector<int>>dp(n+1,vector<int>(n+1,0));
	cout<<MSIS(inputArray,0,0,dp)<<endl;
	return 0;
}