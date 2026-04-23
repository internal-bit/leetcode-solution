class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result; // This is for the output.

        for (int x : nums) { // So with my own stupid words to describe this, I am using x to represent the value of each number in the nums vector.
                             // So the loop will run until the numbers in the nums vector are all included and then it the loop will ends.
            result.push_back(x); // Push back is used to add the value of x to result vector, so first number on nums vector will get pushed to result.
        }                       
        for (int x : nums) {    // And basically this is the same loop as the first one.
                                // But it will run again to add the numbers in the nums vector to the result vector again, so it will be added twice.
            result.push_back(x);
        }

        return result; // Finally, return the result vector which is the output of this function.
    }
};
