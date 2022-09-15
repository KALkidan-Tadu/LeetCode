class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mymap;
        vector<int> answer;
        for(int i=0; i<arr1.size(); i++){
            mymap[arr1[i]]++;
        }
        for(int i=0; i<arr2.size(); i++){
            while(mymap[arr2[i]]>0){
                answer.push_back(arr2[i]);
                mymap[arr2[i]]--;
            }
        }
        int n = answer.size();
        for(auto i : mymap){
            if(i.second>0){
                while(i.second>0){
                    answer.push_back(i.first);
                    i.second--;
                }  
            }
        }
        sort(answer.begin()+n, answer.end());
        return answer;
    }
};
