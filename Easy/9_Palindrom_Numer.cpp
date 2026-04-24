class Solution {
public:
    bool isPalindrome(int x) {
        long b = 0; // x = 123
        int y = x;
        bool res;
        while (x > 0) {
            b = (b * 10) + (x % 10);
            x = x / 10;
        }
        if(b == y) {
            res = true;
        }
        else{
            res = false;
        }
        return res;
    }
};