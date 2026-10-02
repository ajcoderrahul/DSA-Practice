class Solution {
public:
    int ispossible(vector<int>& piles,int h,int k){
        long long time = 0;
        for(int i = 0;i< piles.size();i++){
            time += (piles[i]+k-1)/k;
        }
        return time <= h;
    }    
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int ans = high;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(ispossible(piles,h,mid)){
                ans = mid;
                high = mid -1;
            }else{
                low = mid+1;
            }
        }
    return ans;
}    
};