class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int maxRamp = 0;
        stack<int>stack;
        for(int i=0; i<nums.size(); i++){
            if(stack.empty() || nums[stack.top()]>nums[i])
                stack.push(i);
        }
        for(int i=nums.size()-1; i>maxRamp; i--){
            while(!stack.empty() && nums[stack.top()]<=nums[i]){
                maxRamp = max(maxRamp, i-stack.top());
                stack.pop();
            }
        }
        return maxRamp;
    }
};
