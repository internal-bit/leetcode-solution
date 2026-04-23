class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        int total = 0;

        for (int i = 0 ; i < n ; i++) {
            for (int j = 0 ; j < n ; j++) {
                if (nums[i] > nums[j]) {
                    total++;
                }
            }
            result.push_back(total);
            total = 0;
        }
        return result;
    }
};