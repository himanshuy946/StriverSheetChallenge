#include <algorithm>
void findCombs(int index , int target , vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans){

	if(target == 0){
		ans.push_back(ds);							
		return;  					
	}

        for (int i = index; i < arr.size(); i++) {
          if (i != index and arr[i] == arr[i - 1]) {
            continue; 
          }
          if (arr[i] > target) {
            break;
          }
          ds.push_back(arr[i]);

          findCombs(i + 1, target-arr[i], arr, ds, ans);
		  ds.pop_back(); 
        }
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{

	sort(arr.begin(), arr.end());
	vector<int> ds;
	vector<vector<int>> ans;
	findCombs(0, target, arr, ds, ans);
	
	return ans;
}
