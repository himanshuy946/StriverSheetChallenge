void findSub(int index, vector<int>&arr, vector<vector<int>>& ans, vector<int>& ds, int s, int k, int n){
    // base case
    if(index==n){
        if(s==k){
            ans.push_back(ds);
        }
        return;
    }

    // recursive case
    // take case
    ds.push_back(arr[index]);
    s+= arr[index];
    findSub(index+1,arr,ans,ds,s,k,n);

    // not take case
    ds.pop_back();
    s -= arr[index];
    findSub(index+1, arr,ans,ds, s, k, n);
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>> ans;
    vector<int> ds;
    findSub(0, arr,ans,ds, 0, k, n);
    return ans;
}
