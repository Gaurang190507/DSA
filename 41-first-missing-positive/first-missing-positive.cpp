
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int num = 1;
        while(st.find(num) != st.end()){
            num++;
        }
        return num;
    }
};
