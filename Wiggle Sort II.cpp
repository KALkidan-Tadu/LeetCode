class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(), nums.end());
        temp = nums;
        for(int i=1; i<nums.size(); i+=2){
            nums[i] = temp[temp.size()-1];
            temp.pop_back();
        }
        for(int i=0; i<nums.size(); i+=2){
            nums[i] = temp[temp.size()-1];
            temp.pop_back();
        }
    }
};
