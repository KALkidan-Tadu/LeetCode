class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> result;
        int total=0, rightSum=0, leftSum=0;
        for(int num: nums)
            total += num;
        for(int i=0; i<nums.size(); i++){
            int leftdif = i * nums[i] - leftSum;
            leftSum += nums[i];
            rightSum = total - leftSum;
            int rightdif = rightSum - (nums.size()-i-1)*nums[i];
            result.push_back(rightdif+leftdif);
        }
        return result;
    }
};
