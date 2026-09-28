class Solution {
public:
    void func(vector<char>&s, int l, int r){
        if(l >= r){
            return;
        }
        swap(s[l],s[r]);
        func(s,l+1,r-1);
    }
    void reverseString(vector<char>& s) {
        int n = s.size();
        func(s,0,n-1);
    }
};