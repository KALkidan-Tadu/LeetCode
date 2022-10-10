class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int maxlen = 0, right=0, left=0;
        while(right<s.length()){
            maxCost -= abs(s[right]-t[right]);
            right++;
            if(maxCost>=0)
               maxlen = max(maxlen, right-left);
            else{
               maxCost += abs(s[left]-t[left]);
               left++; 
            }
        }
        return maxlen;
    }
};
