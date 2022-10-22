class Solution {
public:
    string simplifyPath(string path) {
        stack<string> stack;
        for(int i=0; i<path.length(); i++){
            string temp = "";
            if(path[i]=='/')
                continue;
            while(i<path.length() && path[i]!='/'){
                temp.push_back(path[i]);
                i++;
            }
            if(temp==".")
                continue;
            if(temp==".."){
                if(!stack.empty())
                    stack.pop();
            }
            else
                stack.push(temp);
        }
        string output= "";
        while(!stack.empty()){
            output = stack.top() + output;
            output = '/' + output;
            stack.pop();
        }
        if(output=="")
            return "/";
        return output;
        }
};
