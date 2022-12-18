class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target > nums[nums.size()-1])
            return nums.size();
        if(target < nums[0])
            return 0;
        int answer = binarySearch(nums, target);
        while(answer == -1){
            answer = binarySearch(nums, --target);
            if(answer != -1){
                answer += 1;
                break;
            }
        }
        return answer;
    }
    int binarySearch(vector<int>arr, int number){
        int index=-1, high=arr.size()-1, low=0;
        while(low<=high){
            int mid = (high+low)/2;
            if(arr[mid] == number){
                index = mid;
                break;
            }
            else if(arr[mid]>number)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return index;
    }
};
