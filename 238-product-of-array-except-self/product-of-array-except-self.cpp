class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix;
        vector<int>suffix;
        vector<int>ans;
        //prefix = [1,1,2,6]
        //suffix = [24,12,4,1]
        for(int i=0; i<n; i++){
            if(i == 0){
                prefix.push_back(1);
                continue;
            }
            int prod = nums[i-1]*prefix[i-1];
            prefix.push_back(prod);
        }
        for(int i=n-1; i>=0; i--){
            if(i == n-1){
                suffix.push_back(1);
                continue;
            }
            int prod = nums[i+1]*suffix[n-i-2];
            suffix.push_back(prod);
        }
        reverse(suffix.begin(),suffix.end());
        for(int i=0; i<n; i++){
            ans.push_back((prefix[i]*suffix[i]));
        }
        return ans;
    }
};