class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min=0, max=nums.size()-1;
        int num1 = nums[min]*nums[min+1]*nums[max];
        int num2 = nums[max]*nums[max-1]*nums[max-2];
        if(num1 >= num2)
            return num1;
        return num2;
    }
};
