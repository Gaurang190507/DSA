class Solution {
public:
    int romanToInt(string s) {
        map<string,int>mpp;
        mpp.insert({"I",1});
        mpp.insert({"V",5});
        mpp.insert({"X",10});
        mpp.insert({"L",50});
        mpp.insert({"C",100});
        mpp.insert({"D",500});
        mpp.insert({"M",1000});
        mpp.insert({"IV",4});
        mpp.insert({"IX",9});
        mpp.insert({"XL",40});
        mpp.insert({"XC",90});
        mpp.insert({"CD",400});
        mpp.insert({"CM",900});
        int sum = 0;
        int i = 0;
        while(i<s.size()){
            if(i<s.size()-1){
                string twoSymbol = s.substr(i,2);
                if(mpp.find(twoSymbol) != mpp.end()){
                    sum += mpp[twoSymbol];
                    i += 2;
                    continue;
                }
            }
            string oneSymbol = s.substr(i,1);
            sum += mpp[oneSymbol];
            i++;
        }
        return sum;
    }
};