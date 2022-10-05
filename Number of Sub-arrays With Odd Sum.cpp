class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int odds=0, evens=0, sum=0, answer=0, mod=pow(10,9)+7;
        for(int i=0; i<arr.size(); i++){
            sum = (sum+arr[i])%2;
            if(sum){
                odds++;
                answer += 1 + evens;
            }else{
                evens++;
                answer += odds;
            }
            answer %= mod;
        }
        return answer;
    }
};
