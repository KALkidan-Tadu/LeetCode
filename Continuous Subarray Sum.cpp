class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int>remainders;
        int sum = 0;
        remainders[0] = -1;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            if(remainders.find(sum%k)==remainders.end())
                remainders[sum%k] = i;
            else if(i - remainders[sum%k] > 1)
                return true;
        }
        return false;
    }
};
