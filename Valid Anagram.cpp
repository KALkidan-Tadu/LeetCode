class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mymap;
        for(int i=0; i<s.length(); i++){
            mymap[s[i]]++;
        }
        for(int i=0; i<t.length(); i++){
            if(mymap.find(t[i])!=mymap.end() && mymap[t[i]]>0)
                mymap[t[i]]--;
            else
                return false;
        }
        for(auto i: mymap){
            if(i.second > 0)
                return false;
        }
        return true;
    }
};
