class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stacks;
        stack<char> stackt;
        int i = 0, j=0;
        while(i<s.length()){
            if(s[i]=='#' && stacks.empty()){
                i++;
                continue;
            }
            else if(s[i] == '#')
                stacks.pop();
            else
                stacks.push(s[i]);
            i++;
        }
        while(j<t.length()){
          if(t[j]=='#' && stackt.empty()){
              j++;
              continue;
          }
            else if(t[j] == '#')
                stackt.pop();
            else
                stackt.push(t[j]);
            j++;
        }
        while(!stacks.empty() && !stackt.empty()){
            if(stacks.top()!= stackt.top())
                 return false;
            stacks.pop();
            stackt.pop();
        }
        if(!stackt.empty() || !stacks.empty())
            return false;
        return true;
        
    }
};
