class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int n = nums.size();
        int c = 0;
        int m = 0;
        for (int i = 0; i < n; i++){
            if(nums[i]==1){
                c++;
            }
            else{
                m=max(m,c);
                c=0;
            }
        }
        return max(m,c);
    }
};