class Solution {
public:
    int minAddToMakeValid(string s) {
        int answer = 0, bal = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(')
                bal++;
            else
                bal--;
            if(bal<0){
                bal++;
                answer++;
            }
        }
        return bal + answer;
    }
};
