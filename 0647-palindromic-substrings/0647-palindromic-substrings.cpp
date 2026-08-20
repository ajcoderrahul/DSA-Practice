class Solution {
public:

    bool isPalindrome(string s,int i , int j){
        while(i<= j){
            if(s[i] != s[j]){
                return false;
            }
            i++; 
            j--;
        }
        return true;
    }

    int countSubstrings(string s) {
        int n = s.length();
        int i = 0;
        int count = 0;
        for(;i<n;i++){
            for(int j =i ;j<n;j++)
            if(isPalindrome(s,i,j)){
                count++;
                
            }
            

        }
    return count++;
    }
};