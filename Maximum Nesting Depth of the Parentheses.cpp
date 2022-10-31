class Solution {
public:
    int maxDepth(string s) {
        int answer = 0, left=0, right=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(')
                left++;
            else if(s[i]==')')
                right++;
            answer = max(answer, left-right);
        }
        return answer;
    }
};
