class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        unordered_map<int, int>prev;
        for(int i=0; i<nums.size(); i++){
            if(prev.find(target-nums[i])!=prev.end()){
                answer.push_back(i);
                answer.push_back(prev[target-nums[i]]);
                break;
            }
            prev[nums[i]] = i;
        }
        return answer;
    }
};
