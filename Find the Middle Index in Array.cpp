class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int middleIndex = -1;
        int n = nums.size();
        vector<int>prefixsum(n);
        prefixsum[0] = nums[0];
        for(int i=1; i<prefixsum.size(); i++)
            prefixsum[i] = prefixsum[i-1] + nums[i];
        for(int i=0; i<nums.size(); i++){
            if(i==0){
                if(prefixsum[n-1] - prefixsum[i]==0){
                    middleIndex = i;
                    break;
                } 
            }
            else if(i==n-1){
                if(prefixsum[i-1]==0){
                    middleIndex = i;
                    break; 
                }
            }else{
                if(prefixsum[n-1]-prefixsum[i] == prefixsum[i-1]){
                    middleIndex = i;
                    break;
                }
            }
        }
        return middleIndex;
    }
};
