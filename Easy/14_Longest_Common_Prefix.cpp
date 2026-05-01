class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string f = strs[0];
        std::string res = "";
        for(int i=0;i<f.length();i++){
            char w = f[i];
            for(int j=1;j<strs.size();j++){
                if(i == strs[j].length() || strs[j][i] != w){
                    return res;
                }
            }
            res.push_back(w);
        }
        return res;
    }
};