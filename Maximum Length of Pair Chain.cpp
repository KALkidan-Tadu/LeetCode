class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), compare);
        int maxlen = 1, end = pairs[0][1];
        for(int i=1; i<pairs.size(); i++){
            if(pairs[i][0]>end){
                maxlen ++;
                end = pairs[i][1];
            }
        }
        return maxlen;
    }
    static bool compare(vector<int>&a, vector<int>&b){
        return a[1] < b[1];
    }
};
