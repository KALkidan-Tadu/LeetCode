class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> counts(k);
        int sum = 0;
        for(int num : nums){
            sum += (num%k + k)%k;
            counts[sum%k]++;
        }
        int answer = counts[0];
        for(int c : counts)
            answer += (c*(c-1))/2;
        return answer;
    }
};
