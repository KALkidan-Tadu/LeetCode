class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maximumSum = 0, sum=0;
        int left=0, right=0;
        unordered_map<int, int> counter;
        while(right<nums.size()){
            if((counter.find(nums[right])==counter.end() || counter[nums[right]]==0)){
                counter[nums[right]]++;
                sum += nums[right];
            }
            else{
                while(nums[left]!=nums[right]){
                    counter[nums[left]]--;
                    sum -= nums[left];
                    left++;
                }
                counter[nums[left]]--;
                sum -= nums[left];
                left++;
                right--;
            }
            if(right-left+1 == k){
                    maximumSum = max(maximumSum, sum);
                    counter[nums[left]]--;
                    sum -= nums[left];
                    left++;
            }
            right++;
        }
        return maximumSum;
    }
};
