class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int maxNum = nums[n-1];
        int moves = 0;
        for(int i=0; i<n-1; i++){
            if(nums[i]<maxNum){
                while(nums[i]<maxNum){
                    nums[i]++;
                    moves++;
                }
            }
            else if(nums[i] == maxNum) continue;
        }
        return moves;   
    }
};