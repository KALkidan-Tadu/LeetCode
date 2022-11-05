class Solution {
public:
    int longestWPI(vector<int>& hours) {
        int maxlen = 0, sum=0;
        unordered_map<int, int> mymap;
        for(int i=0; i<hours.size(); i++){
            sum += (hours[i]>8) ? 1 : -1;
            if(sum>0){
               maxlen = max(maxlen, i+1); 
            }else{
               if(mymap.find(sum)==mymap.end())
                   mymap[sum] = i;
                if(mymap.find(sum-1)!=mymap.end())
                    maxlen= max(maxlen, i-mymap[sum-1]);
            }
        }
        return maxlen;
    }
};
