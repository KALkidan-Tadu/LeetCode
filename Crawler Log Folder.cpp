class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> stack;
        int minCount = 0;
        for(int i=0; i<logs.size(); i++){
            if(logs[i]=="./")
                continue;
            else if(logs[i] == "../"){
                if(stack.empty())
                    continue;
                else
                    stack.pop();
            }
            else
                stack.push(logs[i]);
        }
        return stack.size();
    }
};
