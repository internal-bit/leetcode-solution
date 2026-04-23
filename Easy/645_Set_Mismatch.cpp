class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        int duplicate = 0;
        int missing = 0;
        vector<int> count(n + 1, 0);

        for (int i = 0 ; i < n ; i++) {
            count[nums[i]] += 1;
        }


        for (int i = 1; i <= n; i++) {
            if (count[i] == 2) duplicate = i;
            if (count[i] == 0) missing = i;
        }
    
        result.push_back(duplicate);
        result.push_back(missing);
        return result;
    }
};