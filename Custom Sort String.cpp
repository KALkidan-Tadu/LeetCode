class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> mymap;
        string answer = "";
        for(int i=0; i<s.length(); i++)
            mymap[s[i]]++;
        for(int i=0; i<order.length(); i++){
            while(mymap[order[i]]>0){
                answer.push_back(order[i]);
                mymap[order[i]]--;
            } 
        }
        for(int i=0; i<s.length(); i++){
            if(mymap[s[i]]>0){
                answer.push_back(s[i]);
                mymap[s[i]]--;
            }
        }
        return answer;
    }
};
