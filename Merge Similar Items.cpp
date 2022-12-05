class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> merged;
        unordered_map<int, int> count;
        for(int i=0; i<items1.size(); i++)
            count[items1[i][0]] += items1[i][1];
        for(int i=0; i<items2.size(); i++)
            count[items2[i][0]] += items2[i][1];
        for(int i=0; i<items1.size(); i++){
            merged.push_back({items1[i][0], count[items1[i][0]]});
            count[items1[i][0]] = -1;
        }
        for(int i=0; i<items2.size(); i++){
            if(count[items2[i][0]] > -1){
                merged.push_back({items2[i][0], count[items2[i][0]]});
                count[items2[i][0]] = -1;
            }
        }
        sort(merged.begin(), merged.end());
        return merged;
    }
};
