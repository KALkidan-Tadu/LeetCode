class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        int most, fre = 0;
        unordered_map<int, int> mymap;
        for(int i=0; i<barcodes.size(); i++){
            mymap[barcodes[i]]++;
            if(mymap[barcodes[i]]>fre){
                fre = mymap[barcodes[i]];
                most = barcodes[i];
            }
        }
        int pre = 0;
        while(mymap[most]){
            barcodes[pre] = most;
            mymap[most]--;
            pre += 2;
        }
        for(auto i: mymap){
            while(i.second){
                if(pre>=barcodes.size())
                    pre = 1;
                barcodes[pre] = i.first;
                i.second --;
                pre += 2;
            }
        }
        return barcodes;
    }
};
