class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int i=0;
        vector<int> answer;
        sort(nums.begin(), nums.end());
        while(i<nums.size()){
            int j = i+1;
            while(j<nums.size() && nums[j]==nums[i])
                j++;
            if(j-i > nums.size()/3)
                answer.push_back(nums[i]);
            i=j;
        }
        return answer;
    }
};
