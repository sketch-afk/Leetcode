class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        for(auto it : nums){
            int rev = 0;
            while(it>0){
                int rem = it%10;
                rev = (rev*10) + rem;
                it = it/10;
            }
            s.insert(rev);
        }
        return s.size();
    }
};