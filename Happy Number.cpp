class Solution {
public:
    int squareDigit(int n){
        string s = to_string(n);
        long long answer = 0;
        for(int i=0; i<s.length(); i++)
            answer += ((s[i]-'0') * (s[i]-'0'));
        return answer;
    }
    bool isHappy(int n) {
        unordered_map<int, int> visited;
        while(n!=1 && visited.find(n)==visited.end()){
            visited[n]++;
            n = squareDigit(n);
        }
        return (n==1);
    }
};
