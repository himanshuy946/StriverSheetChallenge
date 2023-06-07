#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
	int n = arr.size();
    map<int,int> mpp;
    for (int i = 0; i < n; i++) {
      mpp[arr[i]]++;
    }
    vector<int> ans;
    for (auto it : mpp){
		if(it.second>n/3) ans.push_back(it.first);
	}
        return ans;
	

}
