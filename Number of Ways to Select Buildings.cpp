lass Solution {
public:
    long long numberOfWays(string s) {
        long long answer = 0, total0=0, total1=0, ones=0, zeros=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='1')
                total1++;
            else
                total0++;
        }
        for(int i=0; i<s.length(); i++){
            if(s[i]=='1'){
                ones++;
                answer += zeros*(total0-zeros);
            }else{
                zeros++;
                answer+= ones*(total1-ones);
            }
        }
        return answer;
    }
};
