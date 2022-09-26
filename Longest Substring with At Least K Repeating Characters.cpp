class Solution {
public:
    int solve(string s, int start, int end, int k) {
        if(start>=s.size() || end-start+1<k) return 0;
        unordered_map<char, int> mymap;
        for(int i=start; i<=end; i++)
            mymap[s[i]]++;
        for(int i=start; i<=end; i++){
        if(mymap[s[i]]<k){
                int j = i;
                while(j<s.length()&&mymap[s[j]]<k){
                    j++;
                }
                return max(solve(s,start,i-1,k),solve(s,j,end,k));
            }
        }
        return end - start + 1;
    }
    
  int longestSubstring(string s, int k){
      return solve(s, 0, s.length()-1, k);
  }
};
