class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int ones=0, zeros=0;
        for(int i=0; i<students.size(); i++){
            if(students[i]==0)
                zeros++;
            else
                ones++;
        }
        for(int i=0; i<sandwiches.size(); i++){
            if(sandwiches[i]==0){
                if(zeros==0)
                    return ones;
                else
                    zeros--;
            }else{
                if(ones==0)
                    return zeros;
                else
                    ones--;
            }
        }
        return 0;
    }
};
