class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int minOperations = 0, sum=0, substracts=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                nums[i] -= substracts;
                if(nums[i]>0){
                    substracts += nums[i];
                    nums[i] -= substracts;
                    minOperations++;
                }   
            }
        }
        return minOperations;
    }
};
