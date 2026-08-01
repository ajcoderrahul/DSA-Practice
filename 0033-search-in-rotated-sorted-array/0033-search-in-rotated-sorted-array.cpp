class Solution {
public:
    int findPivot(vector<int> arr){
    int s= 0;
    int e = arr.size()-1;
    if(arr[s]<=arr[e]){
            return e;
        }
    while (s<= e)
    {
        int mid = s+(e-s)/2;
        
        if(mid > s && arr[mid]<arr[mid-1]){
            return mid-1;

        }if (mid < e && arr[mid+1]<arr[mid])
        {
            return mid;

        }  if (arr[s]<arr[mid])
        {
            s = mid +1;
        }else{
            e = mid-1;
        }
    }
    return -1;
    
}
int binarysearch(vector<int>nums,int s, int e,int target){
    
    while(s<= e){
        int mid = s+(e-s)/2;
        if(nums[mid]== target){
            return mid;
        }else if(nums[mid]< target){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int ans = findPivot(nums);
        if(target >= nums[0] && target <= nums[ans] ){
            int ans1 = binarysearch(nums,0,ans,target);
            return ans1;
        }else{
            int ans2 = binarysearch(nums,ans+1,nums.size()-1,target);
            return ans2;
        }
    }
};