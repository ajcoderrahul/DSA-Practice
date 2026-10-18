class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        int n = 0;
        while(temp > 0){
            int a = temp%10;
            temp /= 10;
            if(n > INT_MAX/10 || n<INT_MIN/10)return false;
            n = n*10+a; 
        }
        return n == x;
    }
};