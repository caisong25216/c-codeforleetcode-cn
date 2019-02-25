class Solution {
public:
    string convert(string s, int numRows) {
        int len = s.size();
        if(len <= numRows || numRows < 2)
            return s;
        int gap = 2*(numRows -1);
        string ret = "";
        for(int i=0;i<numRows;i++){
            for(int j=0;i+gap*j<len;j++){
                ret += s[i+gap*j];
                if(i > 0 && i < numRows -1 && gap*(j+1) -i < len ){
                    ret += s[gap*(j+1) -i];
                }
            }
        }
        return ret;
    }
};
