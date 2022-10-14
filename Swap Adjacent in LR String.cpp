class Solution {
public:
    bool canTransform(string start, string end) {
        string startString ="", endString="";
    for(int i=0; i<start.length(); i++){
        if(start[i]!='X')
            startString.push_back(start[i]);
    }
    for(int i=0; i<end.length(); i++){
        if(end[i]!='X')
            endString.push_back(end[i]);
    }
    if(startString != endString)
        return false;
    int e=0, s=0;
    while(s<start.length() && e<start.length()){
        if(start[s]=='X')
            s++;
        else{
            if(end[e]=='X')
                e++;
            else if((s>e && start[s]=='R')||(e>s && start[s]=='L'))
                return false;
            else{
                s++;
                e++;
            }
        }
    }
    return true;
    }
};
