class Solution {
public:

    static bool cmp(string first,string second){
        return first +second > second + first;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> s;
        for(int i = 0;i<nums.size();i++){
            s.push_back(to_string(nums[i]));
        }
        sort(s.begin(),s.end(),cmp);
        string ans;
        for(int i = 0;i< s.size();i++){
            ans += s[i];
        }
        if(ans[0]== '0'){
            return "0";
        }
        return ans;
    }
};