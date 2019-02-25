class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.size();
        string ret = s.substr(0,1);
        int maxlen = 1;
        int templen = 0;
        int left , right;
        left = right = 0;
        bool flag = 1;
        for(int i = 0 ; i< len; i++){
            for(int j = len-1 ; j>i; j--){
                if(s[i] == s[j]){
                    left = i+1;
                    right = j-1;
                    while(left<right){
                        if(s[left]!=s[right]){
                            break;
                        }
                        left++;
                        right--;
                    }
                    if(right - left < 2 && s[left]==s[right]){
                        templen = j - i + 1;
                        if(templen > maxlen){
                            ret = s.substr(i,j-i+1);
                            maxlen = ret.size();
                        }
                    }
                }
            }
        }
        return ret;
    }
};
