class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = n;
        while(k--){
            i--;
        }
        return nums[i];    
    }
};