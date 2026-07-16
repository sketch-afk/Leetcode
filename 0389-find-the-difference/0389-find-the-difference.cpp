class Solution {
public:
    char findTheDifference(string s, string t) {
       char res = 0;
        
        // XOR all characters in s
        for (char c : s) res ^= c;
        // XOR all characters in t
        for (char c : t) res ^= c;
        
        return res;
    }
};