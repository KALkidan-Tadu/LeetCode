class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char, int>freq;
        unordered_map<char, bool>present;
        stack<char>stack;
        for(int i=0; i<s.length(); i++){
            freq[s[i]]++;
        }
        for(int i=0; i<s.length(); i++){
            freq[s[i]]--;
            if(present[s[i]])
                continue;
            while(!stack.empty() && stack.top()>s[i] && freq[stack.top()]>0){
                present[stack.top()] = false;
                stack.pop();
            }
            stack.push(s[i]);
            present[s[i]] = true;
        }
        string answer = "";
        while(!stack.empty()){
            answer = stack.top() + answer;
            stack.pop();
        }
        return answer;
    }
};
