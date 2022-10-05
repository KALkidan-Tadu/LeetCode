class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> mystack;
        vector<int> response(nums.size(), -1);
        for(int i=0; i<nums.size()*2; i++){
            while(!mystack.empty() && nums[mystack.top()%nums.size()]<nums[i%nums.size()]){
                response[mystack.top()%nums.size()] = nums[i%nums.size()];
                mystack.pop();
            }
            mystack.push(i%nums.size());
        }
        return response;
    }
};
