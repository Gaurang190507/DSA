class Solution {
public:
    int minMoves(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int n = nums.size();
        int maxel = *max_element(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            if(nums[i] != maxel){
                mpp[nums[i]]++;
            }
        }
        int moves = 0;
        for(auto it : mpp){
            if(it.second == 1){
                moves += (maxel-it.first);
            }
            else if(it.second > 1){
                moves += (it.second)*(maxel-it.first);
            }
        }
        return moves;    
    }
};