class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mpp;
        for(int i=0; i<magazine.size(); i++){
            mpp[magazine[i]]++;
        }
        for(int i=0; i<ransomNote.size(); i++){
            if(mpp.find(ransomNote[i]) == mpp.end()){
                return false;
            }
            if(mpp[ransomNote[i]] == 0){
                return false;
            }
            if(mpp.find(ransomNote[i]) != mpp.end()){
                mpp[ransomNote[i]]--;
            }
        }
        return true;    
    }
};