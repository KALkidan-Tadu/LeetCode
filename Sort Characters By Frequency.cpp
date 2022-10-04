class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(int i=0; i<s.length(); i++)
            freq[s[i]]++;
        vector<pair<char, int>> v;
        for(auto f: freq)
            v.push_back(f);
        sort(v.begin(), v.end(), compare);
        string answer = "";
        for(int i=0; i<v.size(); i++){
            int count = v[i].second;
            for(int j=0; j<count; j++){
                answer += v[i].first;
            }
        }
        return answer;
    }
    bool static compare(pair<char, int>&a, pair<char, int>&b){
        return a.second > b.second;
    }
};
