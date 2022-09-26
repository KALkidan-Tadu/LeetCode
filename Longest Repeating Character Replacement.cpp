class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right = 0, answer = 0, maxf = 0;
        unordered_map<char, int> freq;
        while(right<s.length()){
            freq[s[right]]++;
            maxf = max(maxf, freq[s[right]]);
            int leftelements = (right - left + 1) - maxf;
            while(leftelements > k){
                freq[s[left]]--;
                left++;
                leftelements = (right - left + 1) - maxf;
            }
            answer = max(answer , right - left + 1);
            right ++;
        }
        return answer;
    }
};
