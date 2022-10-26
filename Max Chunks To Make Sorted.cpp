class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int pointer = 0, numOfChunks=0, maxim=-1;
        while(pointer<arr.size()){
            maxim = max(maxim, arr[pointer]);
            if(pointer == maxim){
                numOfChunks++;
                maxim = -1;
            }
            pointer++;
        }
        return numOfChunks;
    }
};
