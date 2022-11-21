class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> answer(2);
        int n = nums.size();
        vector<int> list(n);
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++)
            list[nums[i]-1] += 1;
        for(int i=0; i<list.size(); i++){
            if(list[i] == 2)
                answer[0] = i+1;
            else if(list[i] == 0)
                answer[1] = i+1;
        }
        return answer;
    }
};
