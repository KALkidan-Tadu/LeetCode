class Solution {
public:
    int longestContinuousSubstring(string s) {
        if(s.length() == 1)
            return 1;
        int left=0, right=1, maxlen = 1;
        while(right<s.length()){
            if((int) s[right]== (int)s[right-1]+1)
                maxlen = max(maxlen, right-left+1);
            else
                left = right;
            right++;
        }
        return maxlen;
    }
};
