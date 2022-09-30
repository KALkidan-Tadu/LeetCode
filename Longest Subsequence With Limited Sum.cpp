class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>answer;
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++)
            nums[i] = nums[i]+nums[i-1];
        for(int i=0; i<queries.size(); i++){
            int j = 0;
            while(j<nums.size() && nums[j]<=queries[i])
                j++;
            answer.push_back(j);
        }
        return answer;
    }
};
