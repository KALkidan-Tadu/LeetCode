class Solution {
public:
    bool isValid(string s) {
        stack<char>stack;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='c'){
                if(stack.size()<2 || stack.top() != 'b')
                    return false;
                stack.pop();
                if(stack.top()!='a')
                    return false;
                stack.pop();
            }
            else
                stack.push(s[i]);
        }
        return stack.empty();
    }
};
