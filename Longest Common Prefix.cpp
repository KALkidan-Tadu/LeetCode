class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)
            return strs[0];
        string answer = compare(strs[0], strs[1]);
        if(strs.size()==2)
            return answer;
        for(int i=2; i<strs.size(); i++){
            answer = compare(strs[i], answer);
        }
        return answer;
    }
    string compare(string s1, string s2){
        string s="";
        for(int i=0; i<s1.length()&& i<s2.length(); i++){
            if(s1[i] == s2[i])
                s = s+s1[i];
            else
                break;
        }
        return s;
    }
};
