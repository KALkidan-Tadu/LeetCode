class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> stack;
        string answer = "";
        for(int i=0; i<s.length(); i++){
            if(stack.empty() || stack.top().first!=s[i])
                stack.push({s[i], 1});
            else{
                auto prev = stack.top();
                stack.pop();
                stack.push({s[i], prev.second+1});
            }
            if(!stack.empty() && stack.top().second==k)
                stack.pop();
        }
        while(!stack.empty()){
            char temp = stack.top().first;
            int freq = stack.top().second;
            while(freq>0){
                answer.push_back(temp);
                freq--;
            }
            stack.pop();
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};
