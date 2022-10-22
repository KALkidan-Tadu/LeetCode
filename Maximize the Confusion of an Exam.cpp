class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int t=0, f=0, left=0, right=0, maxlen=0;
        while(right<answerKey.length()){
            if(answerKey[right]=='T')
                t++;
            else
                f++;
            while(right-left+1 - max(t,f) >k){
                if(answerKey[left]=='T')
                    t--;
                else
                    f--;
                left++;
            }
            maxlen = max(maxlen, right-left+1);
            right++;
        }
        return maxlen;
    }
};
