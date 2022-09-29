class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        sort(ranges.begin(), ranges.end());
        int j = 0, i=0;
        bool found = false;
        for(i=left; i<=right; i++){
            while(j < ranges.size()){
                if((i>ranges[j][0] && i<ranges[j][1]) || i==ranges[j][0] || i==ranges[j][1]){
                    found = true;
                    break;
                }
                else{
                    j++;
                    found = false;
                }
            }
        }
        if(i>right && found==true)
            return true;
        return false;
    }
};
