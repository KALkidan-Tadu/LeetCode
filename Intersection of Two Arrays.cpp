class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mymap;
        vector<int> answer;
        for(int i=0; i<nums1.size(); i++){
            if(mymap.find(nums1[i])==mymap.end())
                mymap[nums1[i]] = 1;
        }
        for(int i=0; i<nums2.size(); i++){
            if(mymap[nums2[i]]==1){
                answer.push_back(nums2[i]);
                mymap[nums2[i]]--;
            }
        }
        return answer;
    }
};
