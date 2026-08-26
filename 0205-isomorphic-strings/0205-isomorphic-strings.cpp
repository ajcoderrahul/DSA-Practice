class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0};
        bool isthash[256] = {0};
        for(int  i = 0; i< s.size();i++){
            if(hash[s[i]] == 0 && isthash[t[i]] == 0){
                hash[s[i]] = t[i];
                isthash[t[i]] = true;
            }
        }
        for(int  i = 0; i< s.size();i++){
            if(char(hash[s[i]])  != t[i]){
                return false;
            }
        }
        return true;
    }
};