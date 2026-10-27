
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for (int num : st) {
            if (st.find(num - 1) == st.end()) {
                int curr = 1;

                while (st.find(num + curr) != st.end()) {
                    curr++;
                }

                longest = max(longest, curr);
            }
        }

        return longest;
    }
};
