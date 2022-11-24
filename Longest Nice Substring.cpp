class Solution {
public:
    string longestNiceSubstring(string s) {
        unordered_map<char, int> characters;
        for(int i=0; i<s.length(); i++)
            characters[s[i]]++;
        for(int i=0; i<s.length(); i++){
            if(characters.find(tolower(s[i]))==characters.end() || characters.find(toupper(s[i]))==characters.end()){
                string left = longestNiceSubstring(s.substr(0,i));
                string right = longestNiceSubstring(s.substr(i+1));
                if(left.length() >= right.length())
                    return left;
                return right;
            }
        }
        return s;
    }
};
