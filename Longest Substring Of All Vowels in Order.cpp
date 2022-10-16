class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int index=1, vowels=1, maxlen=0;
        for(int i=1; i<word.length(); i++){
            if(word[i]==word[i-1])
                index++;
            else if(word[i]>word[i-1]){
                index++;
                vowels++;
            }
            else{
                index = 1;
                vowels = 1;
            }
            if(vowels==5)
                maxlen = max(maxlen, index);
        }
        return maxlen;
    }
};
