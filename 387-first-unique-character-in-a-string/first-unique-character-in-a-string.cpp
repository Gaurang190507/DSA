class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        int ans = -1;
        unordered_map<char,pair<int,int>>mpp;
        for(int i=0; i<n; i++){
            mpp[s[i]].first++;
            mpp[s[i]].second = i;
        }
        for(int i=0; i<n; i++){
            if(mpp[s[i]].first == 1){
                ans = mpp[s[i]].second;
                break;
            }
        }
        return ans;
    }
};