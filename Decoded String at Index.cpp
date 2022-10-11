class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long size = 0;
        for(int i=0; i<s.length(); i++){
            if(isdigit(s[i]))
                size *= s[i]-'0';
            else
                size++;
        }
        for(int i=s.length()-1; i>=0; i--){
            k %= size;
            if(k==0 && isalpha(s[i]))
                return (string)""+s[i];
            if(isdigit(s[i]))
                size /= s[i]-'0';
            else
                size--;
        }
        return "";
    }
};
