class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int left = n*0.05, right = n-left-1, size = right-left+1;
        double sum=0;
        while(left < right){
            sum+=arr[left];
            sum+=arr[right];
            left++;
            right--;
        }
        return sum/size;
    }
};
