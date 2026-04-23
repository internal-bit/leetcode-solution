class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<std::string> result;
        int index = 0;

        for (int i = 1 ; i <= n ; i++) {
            if (i != target[index]) {
                result.push_back("Push");
                result.push_back("Pop");
            }
            else if (i == target[index]) {
                result.push_back("Push");
                index++;
            }
            if (index == target.size()) break;
        }
        return result;
    }
};