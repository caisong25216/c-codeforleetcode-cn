{\rtf1\ansi\ansicpg936\cocoartf1561\cocoasubrtf600
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 class Solution \{\
public:\
    string longestPalindrome(string s) \{\
        int len = s.size();\
        string ret = s.substr(0,1);\
        int maxlen = 1;\
        int templen = 0;\
        int left , right;\
        left = right = 0;\
        bool flag = 1;\
        for(int i = 0 ; i< len; i++)\{\
            for(int j = len-1 ; j>i; j--)\{\
                if(s[i] == s[j])\{\
                    left = i+1;\
                    right = j-1;\
                    while(left<right)\{\
                        if(s[left]!=s[right])\{\
                            break;\
                        \}\
                        left++;\
                        right--;\
                    \}\
                    if(right - left < 2 && s[left]==s[right])\{\
                        templen = j - i + 1;\
                        if(templen > maxlen)\{\
                            ret = s.substr(i,j-i+1);\
                            maxlen = ret.size();\
                        \}      \
                    \}\
                \}\
            \}\
        \}\
        return ret;\
    \}\
\};}