class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>mpp;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int x = target-nums[i];
            if(mpp.find(x) != mpp.end()){
                ans.push_back(i);
                ans.push_back(mpp[x]);
            }
            mpp[nums[i]] = i; 
        } 
        return ans;       
    }
};