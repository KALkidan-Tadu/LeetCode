class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(), beans.end());
        long long removed = 10000000001, presum=0, total=0, n = beans.size()-1;
        for(int i=0; i<beans.size(); i++)
            total += beans[i];
        for(int i=0; i<beans.size(); i++){
            presum += beans[i];
            removed = min(removed, ((presum-beans[i])+((total-presum)- (n*beans[i]))));
            n--;
        }
        return removed;
    }
};
