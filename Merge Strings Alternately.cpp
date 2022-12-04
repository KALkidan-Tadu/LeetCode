class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int pointer1=0, pointer2=0;
        string merged;
        while(pointer1<word1.length() || pointer2<word2.length()){
            if(pointer1<word1.length())
                merged.push_back(word1[pointer1]);
            if(pointer2<word2.length())
                merged.push_back(word2[pointer2]);
            pointer1++;
            pointer2++;
        }
        return merged;
    }
};
