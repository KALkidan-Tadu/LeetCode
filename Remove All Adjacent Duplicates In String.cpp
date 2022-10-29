class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>stack;
        string answer = "";
        for(int i=0; i<s.length(); i++){
            if(stack.empty() || stack.top()!=s[i])
                stack.push(s[i]);
            else{
                while(!stack.empty() && stack.top()==s[i])
                    stack.pop();
            }
        }
        while(!stack.empty()){
            answer = stack.top() + answer;
            stack.pop();
        }
        return answer;
    }
};
