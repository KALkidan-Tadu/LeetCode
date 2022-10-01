class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int elemCounted = 1;
        sort(nums.begin(), nums.end(), greater<int>());
        int prev = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(prev!=nums[i]){
                elemCounted++;
                prev = nums[i];
            }
            if(elemCounted==3)
                return nums[i];
        }
        return nums[0];
    }
};
