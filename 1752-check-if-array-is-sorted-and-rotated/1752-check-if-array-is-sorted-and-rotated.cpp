class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        // for(int i = 0; i<n-1; i++){
        //     if(nums[i]>nums[i+1]){ 
        //         return false;
        //     }
        // }
        // return true;
        int c = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]>nums[(i+1)%n]){
                c++;
            }
            if(c>1){
                return false;
            }
        }
        return true;
    }
};