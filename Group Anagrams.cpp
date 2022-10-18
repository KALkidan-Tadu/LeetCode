class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        for(int i=0; i<strs.size(); i++){
            string temp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            anagrams[strs[i]].push_back(temp);
        }
        vector<vector<string>> output;
        for(auto i: anagrams)
            output.push_back(i.second);
        return output;
    }
};
