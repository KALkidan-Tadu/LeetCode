int answer = 0, left=0, right=0, totalSum=0, sum=0;
        for(int i=0; i<nums.size(); i++)
            totalSum += nums[i];
        if(totalSum == x)
            return nums.size();
        while(right<nums.size()){
            sum += nums[right];
            while(left <= right && sum > totalSum - x){
                sum -= nums[left];
                left++;
            }
            if(sum == totalSum - x)
                answer = max(answer, right-left+1);
            right++;
        }
        if(answer == 0)
            return -1;
        return nums.size() - answer;
