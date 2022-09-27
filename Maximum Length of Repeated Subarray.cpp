class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int answer = 0;
        vector<vector<int>> dp(nums1.size());
        for(int i=0;i<nums1.size();i++)
            dp[i].resize(nums2.size(),0);
        for(int i=0; i<nums1.size(); i++){
            for(int j = 0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    if(i==0 || j==0)
                        dp[i][j]=1;
                    else 
                        dp[i][j] = dp[i-1][j-1] + 1;
                }
                else
                    dp[i][j] = 0;
                answer = max(answer, dp[i][j]);
            }
        }
        return answer;
    }
};
