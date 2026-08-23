class Solution {
public:

    
    int expand(string s,int i ,int j){
        int  count =0;
        while(i >= 0 && j < s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int n = s.length();
        
        int count = 0;
        for(int i = 0;i<n;i++){
            int odd = expand(s,i ,i);
            count+= odd;
            int even = expand(s,i,i+1);        
            count+= even;
        }
    return count;
    }
};