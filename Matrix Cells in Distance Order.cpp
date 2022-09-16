class Solution {
public:
    static bool compare(const vector<int> &a, const vector<int> &b){
        return a[2]<b[2];
    }
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> answer;
        int r=0;
        while(r<rows){
            int c = 0;
          while(c<cols){
              answer.push_back(vector<int>{r, c, abs(rCenter-r)+abs(cCenter-c)});
              c++;
          }  
            r++;
        }
        sort(answer.begin(), answer.end(), compare);
        for(auto &i : answer){
            i.pop_back();
        }
        return answer;
    }
};
