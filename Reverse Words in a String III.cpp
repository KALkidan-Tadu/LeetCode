class Solution {
public:
    string reverseWords(string s) {
        string answer="", s1="";
        int left=0 ,right = 0, middle = 0;
        while(right<s.length()){
            while(right<s.length() && s[right]!=' ')
                right++;
            middle = right - 1;
            while(left<middle){
                char temp = s[left];
                s[left] = s[middle];
                s[middle] = temp;
                left++;
                middle--;
            }
            while(right<s.length() && s[right]==' ')
                right++;
            left = right;
        }
        return s;
    }
};
