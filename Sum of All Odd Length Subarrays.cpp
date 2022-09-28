class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0, len = 1;
        while(len<=arr.size()){
            int s = 0;
            for(int i=0; i<len; i++)
                s += arr[i];
            sum += s;
            int left = 0;
            for(int i=len; i<arr.size(); i++){
                s = s - arr[left] + arr[i];
                sum +=s;
                left++;
            }
            
            len +=2;
        }
        return sum;
    }
};
