class NumArray {
public:
    vector<int> numbers;
    NumArray(vector<int>& nums) {
        numbers = nums;
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        for(int i=left; i<=right; i++)
            sum += numbers[i];
        return sum;
    }
};
