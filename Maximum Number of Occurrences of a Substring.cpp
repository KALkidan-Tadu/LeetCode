class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<char, int> characters;
        unordered_map<string, int> substrings;
        int left=0, right=0, answer=0;
        while(right<s.length()){
            characters[s[right]]++;
            if(right-left+1 > minSize){
                characters[s[left]]--;
                if(characters[s[left]]==0)
                    characters.erase(s[left]);
                left++;
            }
            if(right-left+1 >= minSize && right-left+1 <= maxSize && characters.size()<=maxLetters){
                substrings[s.substr(left, right-left+1)]++;
                answer = max(answer, substrings[s.substr(left, right-left+1)]);
            }
            right++;
        }
        return answer;
    }
};
