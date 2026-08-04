class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int s = nums[0];
       for(int i = 0;i< n;i++){
        while(s< nums[i]){
            
                ans.push_back(s);
                
                
            
            s++;
        }
        s++;
       }
       return ans;
    }

};