class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> values;
        for(int i=0; i<nums.size(); i++)
            values.insert(nums[i]);
        while(true){
            if(values.find(original) == values.end())
                break;
            else
                original *= 2;
        }
        return original;
    }
};
