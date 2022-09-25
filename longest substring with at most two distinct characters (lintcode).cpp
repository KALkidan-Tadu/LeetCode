#include<iostream>
using namespace std;
#include<unordered_map>

int longestSubstring(string s){
    int characters=0, first=0, last=0, len=0;
    unordered_map<char, int>mymap;
    while(last<s.length()){
        if(mymap.find(s[last]) == mymap.end() || mymap[s[last]] == 0){
            characters++;
        }
        mymap[s[last]]++;
        if(characters <= 2){
            last++;
            len = max(len, last-first);
        }else{
            while(characters>2){
                mymap[s[first]]--;
                if(mymap[s[first]]==0)
                    characters--;
                first++;
            }
            }
        }
    return len;
    }


int main(){
    string s = "";
    cout<<longestSubstring(s);
    return 0;
}
