class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>expected = heights;
        int counter = 0;
        sort(expected.begin(), expected.end());
        for(int i=0; i<heights.size(); i++){
            if(heights[i]!=expected[i])
                counter++;
        }
        return counter;
    }
};
