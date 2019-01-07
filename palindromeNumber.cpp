#include <string>
using namespace std;
class Solution {
public:
	int get_length(int x)
	{
		int leng=0;
		while(x)
		{
			x/=10;
			leng++;
		}
		return leng;
	}
    bool isPalindrome(int x) {
    	string str = to_string(x);
        if(x < 0){
        	return false;
        }
        int high = get_length(x) - 1;
        int low = 0;
        while(low <= high){
        	if(str.at(low) != str.at(high)){
        		return false;
        	}
        	low++;
        	high--;
        }
        return true;
    }
};