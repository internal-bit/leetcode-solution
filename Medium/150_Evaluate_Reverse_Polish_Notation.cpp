class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i=0;i<tokens.size();i++){
            std::string t = tokens[i];
            if(t=="+"||t=="-"||t=="*"||t=="/"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                if(t=="+")s.push(b+a);
                else if(t=="-")s.push(b-a);
                else if(t=="*")s.push(b*a);
                else if(t=="/")s.push(b/a);
            }
            else{
                s.push(stoi(t));
            }
        }
        return s.top();
    }
};