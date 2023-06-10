#include <bits/stdc++.h> 

void findSub(int ind, vector<int>&arr, vector<int>&ds, vector<vector<int>>&res){
    res.push_back(ds);
    for(int i= ind;i<arr.size();i++){
        if(i != ind && arr[i]==arr[i-1]) { // to avoid duplicate elements
            continue;
        }
      // recursive case........
        ds.push_back(arr[i]); // take case
        findSub(i+1,arr,ds,res);
        ds.pop_back(); // not take case
    }
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<int> ds;
    vector<vector<int>> res;
    sort(arr.begin(),arr.end());
    findSub(0,arr,ds,res);
    return res;
}
