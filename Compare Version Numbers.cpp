class Solution {
public:
    int compareVersion(string version1, string version2) {
        int v1=0, v2=0;
     string stringV1="", stringV2="";
     int end = max(version1.length(), version2.length()); 
     while(v1 < end || v2<end){
         while(v1 < version1.length() && version1[v1] != '.'){
             if(stringV1=="" && version1[v1]=='0'){
                 v1++;
                 continue;
             }
             stringV1.push_back(version1[v1]);
             v1++;
         }
         if(stringV1=="")
             stringV1 = "0";
         while(v2 < version2.length() && version2[v2] != '.'){
             if(stringV2=="" && version2[v2]=='0'){
                 v2++;
                 continue;
             }
             stringV2.push_back(version2[v2]);
             v2++;
         }
         if(stringV2=="")
             stringV2 = "0";
         if(stoi(stringV1) > stoi(stringV2))
             return 1;
         if(stoi(stringV2) > stoi(stringV1))
             return -1;
         v1++;
         v2++;
         stringV1 = "";
         stringV2 = "";
     }
    return 0;
    }
};
