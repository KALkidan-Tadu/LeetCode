class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        sort(nums.begin(), nums.end());
        int right, left;
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            left = i+1;
            right = nums.size()-1;
            while(left<right){
             if(nums[i]+nums[left]+nums[right] == 0){
                answer.push_back(vector<int>{nums[i], nums[left], nums[right]});
                while(left<right && nums[left]==nums[left+1])
                    left++;
                while(left<right && nums[right]==nums[right-1])
                    right--;
                left++;
            }else if(nums[i]+nums[left]+nums[right] > 0)
                right--;
            else
                left++;   
            }
        }
        return answer;
    }
};
