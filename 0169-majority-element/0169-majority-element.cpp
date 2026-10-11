class Solution {
public:
    int majorityElement(vector<int>& nums) {
      map<int,int>mp;
      for(auto i : nums){
        mp[i]++;
      }  
      int maxi = 0;
      int ele = nums[0];
      for(auto i : mp){
        if(i.second > maxi){
        maxi = max(maxi, i.second);
        ele = i.first;
        }
      }
        return ele;

    }
};