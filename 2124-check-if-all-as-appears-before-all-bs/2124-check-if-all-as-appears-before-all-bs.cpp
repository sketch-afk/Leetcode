class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        bool check = true;
        for(int i = 0; i < n; i++){
            if(s[i]=='b' && s[i+1]=='a') check = false;
        }
        return check;
    }
};