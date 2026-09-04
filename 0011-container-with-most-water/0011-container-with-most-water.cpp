class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
       int i = 0;
       int j = n-1;
       int high = i*j;
       while(i<j){
        int m = min(height[i],height[j]);
        int a = j-i;
        int area = m*a;
        high = max(high,area);
        if(height[i]<height[j]){
            i++;
        }else{
            j--;
        }
       }
       return high;
    }
};