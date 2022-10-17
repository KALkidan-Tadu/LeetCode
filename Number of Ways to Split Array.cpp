class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int answer=0;
        long long totalsum = 0, currsum=0; 
        for(int i=0; i<nums.size(); i++)
            totalsum += nums[i];
        for(int i=0; i<nums.size()-1; i++){
            currsum += nums[i];
            totalsum -= nums[i];
            if(currsum >= totalsum)
                answer++;
        }
        return answer;
    }
};
