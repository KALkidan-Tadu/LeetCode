class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int sum = 0, i=0;
        while(i<nums.size() && nums[i]<0 && k>0){
            nums[i] *= -1;
            i++;
            k--;
        }
        sort(nums.begin(), nums.end());
        if(k>0 && nums[0]!=0){
            if(k%2)
                nums[0] *= -1;
        }
        for(int num: nums)
            sum += num;
        return sum;
    }
};
