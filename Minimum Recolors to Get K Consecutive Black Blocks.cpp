class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int recolor = 0, left=0, right=0, answer=INT_MAX;
        while(right<k){
            if(blocks[right]=='W')
                recolor++;
            right++;
        }
        answer = min(recolor, answer);
        while(right<blocks.length()){
            if(blocks[left]=='W')
                recolor--;
            left++;
            if(blocks[right]=='W')
                recolor++;
            right++;
            answer = min(recolor, answer);
        }
        return answer;
    }
};
