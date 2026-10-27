class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st;
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
        int num = 1;
        for(auto it : st){
            if(st.find(num) != st.end()){
                num++;
            }
        }
        return num;  
    }
};