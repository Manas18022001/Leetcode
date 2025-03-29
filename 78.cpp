class Solution {
public:

    void solve(vector<vector<int>> &ans, vector<int>& nums, int ptr, vector<int> v){
        if(ptr>=nums.size()){
            ans.push_back(v);
            return;
        }

        //exclude
        solve(ans, nums, ptr+1, v);
        //include
        v.push_back(nums[ptr]);
        solve(ans, nums, ptr+1, v);
        


    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        solve(ans, nums, 0, v);
        return ans;
    }
};