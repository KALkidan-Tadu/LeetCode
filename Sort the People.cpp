class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>answer;
        unordered_map<int, int>mymap;
        for(int i=0; i<names.size(); i++)
            mymap[heights[i]] = i;
        sort(heights.begin(), heights.end(), greater<int>());
        for(int i=0; i<heights.size(); i++)
            answer.push_back(names[mymap[heights[i]]]);
        return answer;
    }
};
