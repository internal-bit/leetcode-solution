class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int res;
        int countL = 0;
        int countR = 0;
        int countW = 0;
        for(char c : moves){
            if(c=='L') countL += 1;
            else if(c=='R') countR += 1;
            else countW += 1;
        }
        res = abs(countL - countR) + countW;
        return res;
    }
};