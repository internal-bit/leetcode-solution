class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int plus = 0;   // Plus everytime we see 1, reset to 0 when we see 0.
        int total = 0; // Total max consecutive ones.
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] == 1) { 
                plus += 1; // If we see 1, add 1 to plus.
            }
            else if (nums[i] == 0) {
                plus = 0;   // If we see 0, reset plus to 0.
            }
            if (plus > total) {
                total = plus; // if plus is greater than total, update total to plus.
            }   
        }

 
        return total; // Return the total max consecutive ones.
    }
};