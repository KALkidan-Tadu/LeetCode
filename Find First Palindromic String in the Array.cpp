class Solution {
public:
    bool isPalindrome(string s){
        int left=0, right=s.length()-1;
        while(left<right){
            if(s[left]!=s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++){
            if(isPalindrome(words[i]))
                return words[i];
        }
        return "";
    }
};
