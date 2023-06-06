#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	map<int,int> mpp;
	for(int i=0;i<n;i++){
		mpp[arr[i]]++;
	}
	int maxoccur = 0, index=-1;
	for(auto it:mpp){
		if(it.second>maxoccur && it.second>n/2){
			maxoccur = max(maxoccur,it.second);
			index = it.first;
		}
	}
	return index;
}
