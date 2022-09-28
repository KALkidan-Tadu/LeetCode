class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int answer = 0, left=0, right=0, sum=0;
        unordered_map<int,int> mymap;
        while(right<nums.size()){
            if(mymap[nums[right]]>0){
                sum -= nums[left];
                mymap[nums[left]]--;
                left++;
                right--;
            }else{
                sum += nums[right];
                mymap[nums[right]]++;
            }
            answer = max(answer,sum);
            right++;
        }
        return answer;
    }
};
