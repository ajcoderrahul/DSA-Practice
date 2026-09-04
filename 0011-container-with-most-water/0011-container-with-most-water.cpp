class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
       int i = 0;
       int j = n-1;
       int high = 0;
       while(i<j){
        
        int width = j-i;
        int h = min(height[i],height[j]);
        
        high = max(high,width*h);
        if(height[i]<height[j]){
            i++;
        }else{
            j--;
        }
       }
       return high;
    }
};