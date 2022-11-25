class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> mymap;
        vector<int>sorted = arr;
        sort(sorted.begin(), sorted.end());
        int rank = 1;
        for(int i=0; i<sorted.size(); i++){
            if(mymap.find(sorted[i])==mymap.end()){
                mymap[sorted[i]] = rank;
                rank++;
            }
        }
        for(int i=0; i<arr.size(); i++)
            arr[i] = mymap[arr[i]];
        return arr;
    }
};
