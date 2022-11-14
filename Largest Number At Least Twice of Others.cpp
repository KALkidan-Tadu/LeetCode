class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maximumIndex = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] > nums[maximumIndex])
                maximumIndex = i;
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=nums[maximumIndex] && nums[i]*2 > nums[maximumIndex])
                return -1;
        }
        return maximumIndex;
    }
};
