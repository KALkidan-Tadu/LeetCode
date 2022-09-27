class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int answer=INT_MAX;
        int left=0, right=left+k-1;
        while(right<nums.size()){
            answer = min(answer, nums[right]-nums[left]);
            left++;
            right++;
        }
        return answer;
    }
};
