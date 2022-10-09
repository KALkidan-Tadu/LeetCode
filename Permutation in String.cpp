class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length())
            return false;
        vector<int> s1map(26,0);
        vector<int> s2map(26,0);
        int right=0, left=0;
        while(right<s1.length()){
            s1map[s1[right]-'a']++;
            s2map[s2[right]-'a']++;
            right++;
        }
        if(s1map==s2map)
            return true;
         while(right<s2.length()){
             s2map[s2[left]-'a']--;
             left++;
             s2map[s2[right]-'a']++;
             right++;
             if(s1map==s2map)
                 return true;
         } 
            return false;
    }
};
