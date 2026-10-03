class Solution {
public:
    void func(int idx,vector<vector<int>>&ans,vector<int>&nums,vector<int>&temp){
        int n = nums.size();
        if(idx >= n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        func(idx+1,ans,nums,temp);
        temp.pop_back();
        func(idx+1,ans,nums,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int>temp;
        func(0,ans,nums,temp); 
        return ans;   
    }
};