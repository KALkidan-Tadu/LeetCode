class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int answer=0;
        unordered_map<int, int> mymap;
        for(int i=0; i<nums.size(); i++){
            mymap[nums[i]]++;
        }
        for(int i=0; i<nums.size(); i++){
            if(mymap[nums[i]+diff]>0 && mymap[nums[i]+2*diff])
                answer++;
        }
        return answer;
    }
};
