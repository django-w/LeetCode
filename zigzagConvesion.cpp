
class Solution {
public:
    string convert(string s, int numRows) {
        if(s.length() == 0){
            return s;
        }
        if(numRows == 1){
            return s;
        }
    	string zigString;
        int numBlocks = s.length() / (numRows * 2 - 2) + 1;
        int flag = 0;
        for(int i = 0; i < numRows; i++){
        	for(int j = 0; j < numBlocks; j++){
        		if((i == 0 || i == (numRows - 1)) && ((i + j * (2 * numRows - 2)) < s.length())){
        			zigString.append(1, s.at(i + j * (2 * numRows - 2)));
        		}
        		if((i > 0) && (i < (numRows - 1))){
        			if((i + j * (2 * numRows - 2)) < s.length()){
        				zigString.append(1, s.at(i + j * (2 * numRows - 2)));
        			}
        			if(((j + 1) * (2 * numRows - 2) - flag) < s.length()){
        				zigString.append(1, s.at((j + 1) * (2 * numRows - 2) - flag));
        			}
        		}
        	}
        	flag++;
        }
        return zigString;
    }
};