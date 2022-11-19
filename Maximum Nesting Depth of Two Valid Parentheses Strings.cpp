class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> answer;
        int depth = 0;
        for(int i=0; i<seq.size(); i++){
            if(seq[i]=='(')
                depth++;
            answer.push_back(depth%2);
            if(seq[i]==')')
                depth--;
        }
        return answer;
    }
};
