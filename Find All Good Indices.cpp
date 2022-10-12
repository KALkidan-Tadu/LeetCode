class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        vector<int> leftSorted(nums.size());
        vector<int> rightSorted(nums.size());
        vector<int> output;
        leftSorted[0] = 1;
        rightSorted[nums.size()-1] = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] <= nums[i-1])
                leftSorted[i] = leftSorted[i-1]+1;
            else
                leftSorted[i] = 1;
        }
        for(int i=nums.size()-2; i>=0; i--){
            if(nums[i] <= nums[i+1])
                rightSorted[i] = rightSorted[i+1] +1;
            else
                rightSorted[i] = 1;
        }
        for(int i=k; i<nums.size()-k; i++){
            if(leftSorted[i-1]>=k && rightSorted[i+1]>=k)
                output.push_back(i);
        }
        return output;
    }
};
