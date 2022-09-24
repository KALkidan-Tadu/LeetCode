class Solution {
public:
    string reverseStr(string s, int k) {
        int count = 0, i=0;
        while(i<s.length()){
            int start = i, end;
            if(i+k-1 < s.length())
                end = i+k-1;
            else
                end = s.length()-1;
            while(start<end){
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }
            i += 2*k;
        }
        return s;
    }
};
