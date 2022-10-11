class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stack;
        vector<int> answer;
        for(int i=0; i<asteroids.size(); i++){
            if(stack.empty() || asteroids[i]>0)
                stack.push(asteroids[i]);
            else{
                while(true){
                    int peek = stack.top();
                    if(peek<0){
                        stack.push(asteroids[i]);
                        break;
                    }
                    else if(peek==-asteroids[i]){
                        stack.pop();
                        break;
                    }else if(peek>-asteroids[i]){
                        break;
                    }else{
                        stack.pop();
                        if(stack.empty()){
                            stack.push(asteroids[i]);
                            break;
                        }
                    }
                }
            }
        }
        while(!stack.empty()){
            answer.insert(answer.begin(),stack.top());
            stack.pop();
        }
        return answer;
    }
};
