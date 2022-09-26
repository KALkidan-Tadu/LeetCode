class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.length()<3)
            return 0;
        int answer = 0;
        unordered_map<char, int> freq;
        freq[s[0]]++;
        freq[s[1]]++;
        for(int  i=2; i<s.length(); i++){
            int j = i-2;
            freq[s[i]]++;
            if(freq.size()==3)
                answer++;
            freq[s[j]]--;
            if(freq[s[j]]==0)
                freq.erase(s[j]);
        }
        return answer;
    }
};
