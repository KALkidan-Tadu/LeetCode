class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        bool sorted = true;
        int minimum=INT_MAX, maximum=INT_MIN, left=0, right=nums.size()-1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]<nums[i-1])
                sorted = false;
            if(!sorted)
                minimum = min(minimum, nums[i]);
        }
        sorted = true;
        for(int i=nums.size()-2; i>=0; i--){
            if(nums[i]>nums[i+1])
                sorted = false;
            if(!sorted)
                maximum = max(maximum, nums[i]);
        }
        while(left<nums.size() && minimum>=nums[left])
            left++;
        while(right>=0 && maximum<=nums[right])
            right--;
        if(right-left>=0)
            return right-left+1;
        return 0;
    }
};
