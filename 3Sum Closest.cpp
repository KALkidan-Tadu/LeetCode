class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int minimum=-1, answer=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            int left = i+1;
            int right = nums.size()-1;
            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                if(sum==target)
                    return target;
                if(minimum==-1 || abs(target-sum) < minimum){
                    answer = sum;
                    minimum = abs(target-sum);
                }
                else if(sum>target)
                    right--;
                else
                    left++;
            }
        }
        return answer;
    }
};
