class Solution {
public:
    string reverseVowels(string s) {
        int i=0, j=s.length()-1;
        while(i<j){
            while(i<j && !isVowel(s[i])){
                i++;
            }
            while(i<j && !isVowel(s[j])){
                j--;
            }
            if(i>=j)
                break;
            swap(s[i++], s[j--]);
        }
        return s;
    }
    bool isVowel(char c){
        if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
            return true;
        return false;
    }
};
