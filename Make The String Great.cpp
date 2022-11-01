class Solution {
public:
    string makeGood(string s) {
        string answer;
        stack<char> stack;
        for(int i=0; i<s.length(); i++){
            if(!stack.empty() && abs(stack.top()-s[i])==32)
                stack.pop();
            else
                stack.push(s[i]);
        }
        while(!stack.empty()){
            answer.push_back(stack.top());
            stack.pop();
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};
