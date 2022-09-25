class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0, minVal=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            if(sum < minVal){
                minVal = sum;
            }
        }
        if(minVal <= 0)
            return abs(minVal)+1;
        return 1;
    }
};
