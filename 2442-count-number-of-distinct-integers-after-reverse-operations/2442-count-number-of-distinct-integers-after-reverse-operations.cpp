class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s;
        s.reserve(nums.size() * 2);
        for(int it : nums){
            s.insert(it);
            int rev = 0;
            while(it>0){
                rev = (rev*10) + it%10;
                it /=10;
            }
            s.insert(rev);
        }
        return s.size();
    }
};