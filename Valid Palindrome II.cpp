class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0, right = s.length()-1, count1=0, count2=0;
        while(left<=right){
            if(s[left]==s[right]){
                left++;
                right--;
            }
            else{
                count2++;
                left++;
            }
            if(count2 > 1)
                break;
        }
        left=0, right=s.length()-1;
        while(left<=right){
            if(s[left]==s[right]){
                left++;
                right--;
            }
            else{
                count1++;
                right--;
            }
            if(count1>1)
                break;
        }
        if(count1<=1 || count2<=1)
            return true;
        return false;
    }
};
