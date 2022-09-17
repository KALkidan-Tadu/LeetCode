class Solution {
public:
    int calPoints(vector<string>& operations) {
       stack<int> stack;
        for(int i=0; i<operations.size(); i++){
            if(operations[i]=="C")
                stack.pop();
            else if(operations[i]=="D"){
                int temp = stack.top();
                stack.push(temp*2);
            }else if(operations[i]=="+"){
                int temp = stack.top();
                stack.pop();
                int temp2 = stack.top() + temp;
                stack.push(temp);
                stack.push(temp2);
            }else
                stack.push(stoi(operations[i]));
        }
        int answer = 0;
        while(!stack.empty()){
            answer += stack.top();
            stack.pop();
        }
        return answer;
    }
};
