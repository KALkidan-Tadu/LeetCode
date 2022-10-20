class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> stack;
        int num = INT_MIN;
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i] < num)
                return true;
            while(!stack.empty() &&stack.top()<nums[i]){
                num = stack.top();
                stack.pop();
            }
            stack.push(nums[i]);
        }
        return false;
    }
};
