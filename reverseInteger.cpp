class Solution {
public:
    int reverse(int x) {
    	int revNums = 0;
    	int cutoff = 0;
    	while(x != 0){
    		cutoff = x % 10;
    		x /= 10;
            if (revNums > INT_MAX/10 || (revNums == INT_MAX / 10 && cutoff > 7)) return 0;
            if (revNums < INT_MIN/10 || (revNums == INT_MIN / 10 && cutoff < -8)) return 0;
    		revNums = revNums * 10 + cutoff;
    	}
    	return revNums;    
    }
};