class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0; i<haystack.length(); i++){
            int k=i, j=0, count=0;
            while(haystack[k]==needle[j] && count<needle.length()){
                k++;
                j++;
                count++;
            }
            if(count == needle.length())
                return i;
        }
        return -1;
    }
};
