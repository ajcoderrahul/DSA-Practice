class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>newnums(n);
        for(int i = 0;i<n;i++){
            int ni = (i+k)%n;
            newnums[ni] = nums[i];
           
        }
        nums = newnums;
        
    }
};