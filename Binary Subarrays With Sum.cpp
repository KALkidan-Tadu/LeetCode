class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int answer=0;
        unordered_map<int, int> count;
        for(int i=1; i<nums.size(); i++)
            nums[i] = nums[i] + nums[i-1];
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==goal)
                answer++;
            if(count.find(nums[i])!=count.end())
                answer += count[nums[i]];
            count[nums[i]+goal]++;
        }
        return answer;
    }
};
