class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            if((i%2==0 && nums[i]%2==0) || (i%2!=0 && nums[i]%2 != 0))
                continue;
            else{
                if(i%2==0){
                    int j = i+1;
                    while(nums[j]%2 != 0)
                        j+=2;
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }else{
                    int j = i+1;
                    while(nums[j]%2 == 0)
                        j+=2;
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return nums;
    }
};
