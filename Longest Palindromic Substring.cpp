class Solution {
public:
    int maxLength;
    string sub = "";
    void findLongestPalindromic(string s, int low, int high){
        while(low >=0 && high < s.length()){
            if(s.at(low) == s.at(high)){
                int tmp = high - low + 1;
                if(tmp > maxLength){
                    maxLength = tmp;
                    sub = s.substr(low, maxLength);
                }
            }
            else{
                break;
            }
            low--;
            high++;
        }
    }
    string longestPalindrome(string s) {
        maxLength = 0;
        for(int i = 0; i < s.length(); i++){
            findLongestPalindromic(s, i, i);
            findLongestPalindromic(s, i, i+1);
        } 
        return sub;
    }
    

};