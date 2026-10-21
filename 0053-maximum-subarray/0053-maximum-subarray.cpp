class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int n = nums.size();
        // if(n==1) return nums[0];
        // int sum = INT_MIN;
        // for(int i = 0; i<n; i++){
        //     int s = 0;
        //     for(int j = i; j<n ;j++){
        //         s+=nums[j];
        //         sum = max(sum, s);
        //     }
        // }
        // return sum;

        int n = nums.size();
        if(n==1) return nums[0];
        int maxm = INT_MIN;
        int sum = 0;
        for(int i = 0; i<n; i++){
            if(sum<0){
                sum =0;
            }
            sum+=nums[i];
            maxm = max(maxm, sum); 

        }
        return maxm;
    }
};