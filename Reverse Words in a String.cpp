class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        string answer = "", temp="";
        int index = 0;
        while(index<s.length()){
            if(s[index]==' '){
                index++;
                continue;
            }
            while(index<s.length() && s[index]!=' '){
                temp = s[index] + temp;
                index++;
            }
            answer = answer + temp;
            temp = "";
            answer = answer + " ";
        }
        answer.pop_back();
        return answer;
    }
};
