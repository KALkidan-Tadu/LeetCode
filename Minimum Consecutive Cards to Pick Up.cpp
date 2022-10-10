class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int, int> mymap;
        int answer = INT_MAX;
        for(int i=0; i<cards.size(); i++){
            if(mymap.find(cards[i])!=mymap.end())
                answer = min(answer, i-mymap[cards[i]]+1);
            mymap[cards[i]] = i;
        }
        if(answer == INT_MAX)
            return -1;
        return answer;
    }
};
