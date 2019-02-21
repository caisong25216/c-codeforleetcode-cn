class Solution {
public:
    int romanToInt(string s) {
        map<char,int> aaa;
        aaa['I'] = 1;
        aaa['V'] = 5;
        aaa['X'] = 10;
        aaa['L'] = 50;
        aaa['C'] = 100;
        aaa['D'] = 500;
        aaa['M'] = 1000;
        int ret = 0;
        for(int i = 0; i <s.size();++i){
            if(i< (s.size() -1) and aaa[s[i]]<aaa[s[i+1]]){
                ret -= aaa[s[i]];
            }
            else{
                ret += aaa[s[i]];
            }
        }
        return ret;
    }
};