class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int closest = arr[0], index=0;
        vector<int> output;
        for(int i=1; i<arr.size(); i++){
            if(abs(x-arr[i]) < abs(x-closest)){
                closest = arr[i];
                index = i;
            }
        }
        output.push_back(closest);
        if(k==1)
            return output;
        if(index == 0){
            while(k>1){
                index++;
                output.push_back(arr[index]);
                k--;
            }
        }else if(index == arr.size()-1){
            index--;
            while(k>1){
                output.push_back(arr[index--]);
                k--;
            }
        }else{
            int p1 = index-1, p2 = index+1;
            while(k>1){
                if((p1>=0 && abs(x-arr[p1]) <= abs(x-arr[p2])) || (p2>=arr.size())){
                    output.push_back(arr[p1]);
                    p1--;
                }else{
                    output.push_back(arr[p2]);
                    p2++;
                }
                k--;
            }
        }
        sort(output.begin(), output.end());
        return output;
    }
};
