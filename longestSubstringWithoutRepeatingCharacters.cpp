#include<map>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, ans = 0, leng;
        map<char,int> window;
        leng = s.length();
        for(;j < leng; j++){
            if(window.find(s.at(j)) != window.end()){
                i = max(i, window[s.at(j)]);
            }
            ans = max(ans, j - i + 1);
            window[s.at(j)] = j + 1;
        }
        return ans;
    }
};