class Solution {
public:
    string reorganizeString(string s) {
        vector<int>freq(26,0);
        int n=s.size();
        char most_freq;
        int pre=0;
        for(auto ch:s){
            freq[ch-'a']++;
            if(pre<freq[ch-'a']){
                most_freq=ch;
                pre=freq[ch-'a'];
            }
        }
        
        if(freq[most_freq-'a']>(n+1)/2)
            return "";
        
        int pos=0;
        while(freq[most_freq-'a']){
            s[pos]=(most_freq);
            pos+=2;
            freq[most_freq-'a']--;
        }
        
        for(int i=0;i<26;i++){
            while(freq[i]){
                if(pos>=s.size())
                    pos=1;
                s[pos]='a'+i;
                pos+=2;
                freq[i]--;
            }
        }
        return s;
    }
};

