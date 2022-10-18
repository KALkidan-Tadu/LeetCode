class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int lastP=-1, lastG=-1, lastM=-1;
        long long totalmin=0;
        for(int i=garbage.size()-1; i>=0; i--){
            if (lastP==-1 && garbage[i].find('P') != string::npos )
                lastP = i;
            if (lastG==-1 && garbage[i].find('G') != string::npos )
                lastG = i;
            if (lastM==-1 && garbage[i].find('M') != string::npos )
                lastM = i;
            if(lastP!=-1 && lastM!=-1 && lastG!=-1)
                break;
        }
        unordered_map<char, int> freq;
        for(int i=0; i<garbage.size(); i++){
            totalmin += garbage[i].length();
        }
        if(lastM != -1){
            for(int index = 0; index<lastM; index++)
                totalmin += travel[index];
        }
        if(lastP != -1){
            for(int index = 0; index<lastP; index++)
                totalmin += travel[index];
        }
        if(lastG != -1){
            for(int index=0; index<lastG; index++)
                totalmin += travel[index];
        }
        return totalmin;
    }
};
