class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> dna;
        vector<string> repeatedDna;
        int right=0;
        string temp = "";
        if(s.length()<11)
            return repeatedDna;
        while(right<9){
            temp.push_back(s[right]);
            right++;
        }
        while(right<s.length()){
            temp.push_back(s[right]);
            if(dna.find(temp)==dna.end())
                dna[temp]=1;
            else if(dna[temp]!= -1){
                repeatedDna.push_back(temp);
                dna[temp] = -1;
            }
            temp = temp.substr(1);
            right++;
        }
    return repeatedDna;     
    }
};
