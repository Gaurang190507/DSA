class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int curr_depth = 0;
        int max_depth = INT_MIN;
        for(int i=0; i<n; i++){
            if(s[i] == '('){
                curr_depth++;
            }
            else if(s[i] == ')'){
                curr_depth--;
            }
            max_depth = max(max_depth,curr_depth);
        }
        return max_depth;
    }
};