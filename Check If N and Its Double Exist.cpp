class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mymap;
        for(int i=0; i<arr.size(); i++){
            if(mymap.find(arr[i]*2)!=mymap.end() || mymap.find(arr[i]/2)!=mymap.end() && arr[i]%2 == 0)
                return true;
            mymap[arr[i]]++;
        }
        return false;
    }
};
