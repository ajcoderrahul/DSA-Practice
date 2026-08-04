class Solution {
public:
    int binarySearch(vector<int>& nums){
        int s = 0;
        int e = nums.size()-1;
        int ans = 0;
        while(s<= e){
            int mid = s+(e-s)/2;
            
            if(s == e){
                return e;
            }
            if(nums[mid]<nums[mid+1]){
                s = mid+1;

            }else{
                e = mid;
            }
            
        }
        return -1;
    }
    int findPeakElement(vector<int>& nums) {
        int ans = binarySearch(nums);
        return ans;
    }
};