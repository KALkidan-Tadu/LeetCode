class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = 0;
        while(index<word.length() && word[index]!=ch)
            index++;
        int i = 0;
        if(index>=word.length())
            return word;
        while(i<index){
            char temp = word[i];
            word[i] = word[index];
            word[index] = temp;
            i++;
            index--;
        }
        return word;
    }
};
