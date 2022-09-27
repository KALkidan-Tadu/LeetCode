class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int answer = 0, left=0;
        while(left<=s.length()-k){
            int item = stoi(s.substr(left,k));
            if( item!=0 && num%item ==0)
                answer++;
            left++;
        }
        return answer;
    }
};
