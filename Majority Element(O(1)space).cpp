class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0, answer=0;
        while(i<nums.size()){
            int j = i;
            int count = 0;
            while(j<nums.size() && nums[j]==nums[i])
                j++;
            count = j-i;
            if(count>nums.size()/2)
                return nums[i];
            i = j;
        }
        return 0;
    }
};
