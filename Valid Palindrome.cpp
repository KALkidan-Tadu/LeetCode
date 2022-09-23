class Solution {
public:
    bool isPalindrome(string s) {
        string answer;
        for(int i=0; i<s.length(); i++){
            if(iswalnum(s[i]))
                answer.push_back(tolower(s[i])) ;;
        }
        int i=0, j=answer.length()-1;
        while(i<j){
            if(answer[i]!=answer[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
