#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.

	vector<pair<int,int>> vp;
	int n= matrix.size();
	int m= matrix[0].size();

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(matrix[i][j]==0){
				vp.push_back({i,j});
			}
		}
	}
	for(auto p: vp){
		int x= p.first;
		int y= p.second;

		for(int i=0; i<m; i++){
			matrix[x][i]=0;
		}
		for(int i=0; i<n; i++){
			matrix[i][y]=0;
		}

	}


}
