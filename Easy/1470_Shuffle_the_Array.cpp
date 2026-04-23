class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;

        for (int i = 0 ; i < n ; i++) {
            result.push_back(nums[i]); // Push back the index 0 in nums vector first till all index.
            result.push_back(nums[i + n]); // And to bring the i + n next to i, so it shuffled the array. For example, if n = 3, then i = 0, 1, 2 and i + n = 3, 4, 5. So the result will be in the order of index 0, 3, 1, 4, 2, 5.
        }

        return result; // Return the result vector after shuffling the array.
    }
};