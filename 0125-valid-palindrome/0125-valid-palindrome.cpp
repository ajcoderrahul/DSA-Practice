class Solution {
public:
    bool isPalindrome(string s) {
       string result = "";
        for(char c : s){
            if(isalnum(c)){
                result += tolower(c);
            }
        }

    s = result;
        int n =s.size();
        
        int left = 0;
        int right = n-1;
       
        while(left<right){
            if(s[left]!=s[right]){
            return false;
            }
                left++;
                right--;
            
        }
        return true;
    }
};