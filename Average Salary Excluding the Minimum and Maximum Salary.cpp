class Solution {
public:
    double average(vector<int>& salary) {
        int sum = 0, n=salary.size()-2;
        sort(salary.begin(), salary.end());
        for(int i=1; i<salary.size()-1; i++)
            sum += salary[i];
        return (double) sum/n;
    }
};
