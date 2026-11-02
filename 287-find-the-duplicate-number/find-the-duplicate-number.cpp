class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int n = nums.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            if(mpp.find(nums[i]) != mpp.end()){
                ans = nums[i];
            }
            mpp[nums[i]]++;
        }
        return ans;
    }
};