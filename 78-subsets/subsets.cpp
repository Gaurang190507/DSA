class Solution {
public:
    void func(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,int idx,int size){
        if(idx == size){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        func(nums,ans,temp,idx+1,size); //include
        temp.pop_back();    //backtrack
        func(nums,ans,temp,idx+1,size);    //notInclude  
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int>temp;
        func(nums,ans,temp,0,n);
        return ans;
    }
};