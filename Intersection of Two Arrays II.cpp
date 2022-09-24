class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mymap;
        vector<int> answer;
        int i=0, j=0;
        for(int i=0; i<nums1.size(); i++){
            mymap[nums1[i]]++;
        }
        for(int j=0; j<nums2.size(); j++){
            if(mymap[nums2[j]]>0){
                answer.push_back(nums2[j]);
                mymap[nums2[j]]--;
            }
        }
        return answer;
    }
};
