class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        string newWord;

        while(i<word1.length() && j<word2.length()){
            newWord.push_back(word1[i++]);
            newWord.push_back(word2[j++]);
        }

        for(; i<word1.length(); i++){
            newWord.push_back(word1[i]);
        }
        for(; j<word2.length(); j++){
            newWord.push_back(word2[j]);
        }
        return newWord;
    }
};