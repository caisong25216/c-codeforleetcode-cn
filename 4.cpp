class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> s(nums1);
        vector<int> l(nums2);
        int m = nums1.size();
        int n = nums2.size();
        if(nums2.size()<nums1.size()){
            l = nums1;
            s = nums2;
            m = nums2.size();
            n = nums1.size();
        }
        
        int left = 0;
        int right = m;
        int mid_s,mid_l,ret1,ret2;
        while(left<=right){
            mid_s = (left+right)/2;
            mid_l = (m+n+1)/2 -mid_s;
            if(mid_s>0 && mid_l<n && s[mid_s-1]>l[mid_l])
                right = mid_s-1;
            else if(mid_l>0 && mid_s < m && l[mid_l-1]>s[mid_s])
                left = mid_s+1;
            else{
                if(mid_s ==0)
                    ret1 = l[mid_l-1];
                else if(mid_l == 0)
                    ret1 = s[mid_s-1];
                else
                    ret1 = max(s[mid_s-1],l[mid_l-1]);
                break;
            }
        }
        if((m+n)%2 ==1)
            return ret1;
        if(mid_s == m)
            ret2 = l[mid_l];
        else if(mid_l == n)
            ret2 = s[mid_s];
        else
            ret2 = min(s[mid_s],l[mid_l]);
        return (ret1+ret2)/2.0;
    }
};