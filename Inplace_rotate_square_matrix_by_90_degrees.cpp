#include<bits/stdc++.h>
using namespace std;

void Roted_By90(vector<vector<int>>&matrix){
	for(auto &arr:matrix)reverse(begin(arr),end(arr));
		cout<<endl;

	for(int row = 0;row<matrix.size();row++)
		for(int col = 0;col<=row;col++)
			swap(matrix[row][col],matrix[col][row]);

}

int main(){
	int n;cin>>n;
	vector<vector<int>>input(n,vector<int>(n,0));
	for(auto &arr:input)
		for(int &num:arr)
			cin>>num;


	cout<<"After -> \n\n";
	Roted_By90(input);
	for(auto &arr:input){
		for(int &num:arr)cout<<num<<" ";
		cout<<endl;	
	}
	
	return 0;
}