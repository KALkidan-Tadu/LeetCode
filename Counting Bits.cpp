class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> answer(n+1);
        answer[0] = 0;
        if(n==0)
            return answer;
        answer[1] = 1;
        if(n==1)
            return answer;
        for(int i=2; i<answer.size(); i++){
            answer[i] =helpme(i);
        }
        return answer;
    }
    int helpme(int n){
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(n%2==0)
            return helpme(n/2);
        else
            return helpme((n/2))+1;
    }
};
