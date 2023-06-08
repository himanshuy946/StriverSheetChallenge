#include <bits/stdc++.h> 

void findSum(int i, vector<int> &num, vector<int> &ans, int n, int sum){
    // base case
    if(i==n){
        ans.push_back(sum);
        return;
    }
    // recursive cae
    // take case
    sum += num[i];
    findSum(i+1,num,ans,n,sum);

    // not take case
    sum -= num[i];
    findSum(i+1,num,ans,n,sum);
}

vector<int> subsetSum(vector<int> &num)
{
    int n = num.size();
    int sum;
    vector<int> ans;
    findSum(0,num,ans,n,0);
    sort(ans.begin(),ans.end());
    return ans;
}
