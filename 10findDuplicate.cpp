#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// using ka
	int maxArr = INT_MIN;
	int s = arr.size();
	for(int i=0;i<s;i++){
		if(arr[i]> maxArr){
			maxArr = arr[i];
		}
	}
	vector<int> hasarr(maxArr+1,0);
	for(int i=0;i<s;i++){
		hasarr[arr[i]]++;
	}
	for(int i=0;i<maxArr+1;i++){
		if(hasarr[i]>1) return i;
	}
	return 0;
}
