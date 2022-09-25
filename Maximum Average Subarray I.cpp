class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0; i<k; i++){
            sum += nums[i];
        }
        double avg = sum/k;
        int j = 0;
        for(int i=k; i<nums.size(); i++){
            sum += nums[i] - nums[j];
            j++;
            avg = max(avg, sum/k);
        }
        return avg;
    }
};
