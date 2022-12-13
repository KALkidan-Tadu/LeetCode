// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int i=0;
//         while(i<nums.size()){
//             if(i<nums.size()-1 && nums[i] == nums[i+1])
//                 i += 2;
//             else
//                 return nums[i];
//         }
//         return 0;
//     }
// };
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer=0;
        for(auto n : nums)
            answer = answer xor n;
        return answer;
    }
};
