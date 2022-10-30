class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0, right=nums.size()-1;
        vector<int>answer(nums.size());
        for(int i=nums.size()-1; i>=0; i--){
            if(abs(nums[right])>abs(nums[left])){
                answer[i] = nums[right]*nums[right];
                right--;
            }else{
                answer[i] = nums[left]*nums[left];
                left++;
            }
        }
        return answer;
    }
};
