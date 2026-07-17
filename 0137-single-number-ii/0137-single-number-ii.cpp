class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int n = nums.size();
        // for(int i = 0; i<n; i++){
        //     int c=0;
        //     for(int j =0; j<n;j++){
        //         if(nums[j]==nums[i]){
        //             c++;
        //         }
        //     }
        //     if(c==1) return nums[i];
        // }
        // return 0;

        int ones = 0;
        int twos = 0;
        
        for (int num : nums) {
            ones = (ones ^ num) & ~twos;
            
            twos = (twos ^ num) & ~ones;
        }
        
        return ones;
    }
};