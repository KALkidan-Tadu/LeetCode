class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int left=0, right=0;
        long long sum=0, answer=0;
        while(right<nums.size()){
            sum += nums[right];
            while(sum * (right-left+1) >= k){
                sum -= nums[left++];
            }
            answer += right-left+1;
            right++;
        }
        return answer;
    }
};
