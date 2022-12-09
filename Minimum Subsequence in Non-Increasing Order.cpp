class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> answer;
        sort(nums.begin(), nums.end(), greater<int>());
        int totalSum = 0, sum=0, j=0, y=0;
        for(int i=0; i<nums.size(); i++)
            totalSum += nums[i];
        while(j<nums.size() && sum <= totalSum){
            sum += nums[j];
            totalSum -= nums[j];
            j++;
        }
        while(y<j){
            answer.push_back(nums[y]);
            y++;
        }
        return answer;
    }
};
