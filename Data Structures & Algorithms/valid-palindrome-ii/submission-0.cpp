class Solution {
public:
    bool isPal(string s, int l,int h){
        while(l < h){
            if(s[l] != s[h])
                return false;
            l++;
            h--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0;
        int h=s.length()-1;

        while(l<h){
            if(s[l] == s[h]){
                l++;
                h--;
            }
            else{
                return isPal(s,l+1,h) || isPal(s,l,h-1);
            }
        }
        return true;
    }
};