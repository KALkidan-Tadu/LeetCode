class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int last = digits.size()-1;
        if(digits[last]+1 >= 10)
            carry = 1;
        digits[last] = (digits[last]+1)%10;
        last--;
        int c=0;
        while(carry != 0 && last>=0){
            if(digits[last]+carry >=10)
                c = 1;
            else
                c = 0;
            digits[last] = (digits[last] + carry) % 10;
            carry = c;
                last--;
        }
        if(carry == 1){
            vector<int> answer(digits.size()+1);
            answer[0] = 1;
            for(int i=1; i<answer.size(); i++){
                answer[i] = digits[i-1];
            }
            return answer;
        }
        return digits;
    }
};
