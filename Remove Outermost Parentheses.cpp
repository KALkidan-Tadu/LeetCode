class Solution {
public:
    string removeOuterParentheses(string s) {
        string answer="", res="";
        int c = 0;
        stack<char>stack;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(' && c>0){
                c++;
                stack.push(s[i]);
            }
            else if(s[i]=='(' )
                c++;
            else if(s[i]==')'){
                c--;
                if(c>0){
                    stack.push(s[i]);
                }else{
                    while(!stack.empty()){
                    res = stack.top() + res;
                    stack.pop();
                }
                    answer = answer + res;
                    res = "";
            }
            }
        }
        return answer;
    }
};
