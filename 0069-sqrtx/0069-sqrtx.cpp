class Solution {
public:
    
    int mySqrt(int x) {
       long long target = x;
       long long ans= 0;      
       long long s = 0;
       long long e = x;
       while(s<= e){
        long long mid = s+(e-s)/2;
        if((mid * mid) == target){
            return mid;
        }else if((mid * mid) > target){
            e = mid-1;

        }else{
            s = mid+1;
            ans = mid;
        }
       }
       return ans;
    }
};