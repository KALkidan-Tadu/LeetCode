class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int>stack;
        for(int i=0; i<nums.size(); i++){
            while((!stack.empty()) && (stack.back()> nums[i]) && nums.size() - i + stack.size()> k)
                stack.pop_back();
            stack.push_back(nums[i]);
        }
        while(stack.size()>k)
            stack.pop_back();
        return stack;
    }
};
