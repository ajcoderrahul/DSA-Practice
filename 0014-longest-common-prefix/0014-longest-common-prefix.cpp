class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i = 0;
        while(true){
            char curr_ele = 0;
            for(auto str : strs){
                if(i >= str.size()){
                    curr_ele = 0;
                    break;
                }
            if(curr_ele == 0){
                curr_ele = str[i];
            }else if(str[i] != curr_ele){
                curr_ele = 0;
                break;
            }
            }
            
            if(curr_ele == 0){
                break;
            }
            ans.push_back(curr_ele);
            i++;
        }
        return ans;
    }
};