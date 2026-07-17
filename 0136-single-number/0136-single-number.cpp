class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        // for(int i = 0; i<n; i++){
        //     int c = 0;
        //     for(int j =0; j<n;j++){
        //         if(nums[j]==nums[i]){
        //             c++;
        //         }
        //     }
        //     if(c==1) return nums[i];
        // }
        // return 0;

        // int maxx = nums[0];
        // for(int i = 1; i<n; i++){
        //     maxx= max(maxx, nums[i]);
        // }
        // // int hash[maxx]={0};
        // vector<int>hash(maxx+1,0);
        // for(int i = 0 ; i<n; i++){
        //     hash[nums[i]]++;
        // }
        // for(int i = 0; i<n; i++){
        //     if(hash[nums[i]]==1){
        //         return nums[i];
        //     }
        // }
        // return 0;

        // unordered_map<int, int> frequencies;
        
        // for (int num : nums) {
        //     frequencies[num]++;
        // }
        
        // for (auto& pair : frequencies) {
        //     if (pair.second == 1) {
        //         return pair.first;
        //     }
        // }
        // return 0;

        int x = 0;
        for(int n: nums){
            x^=n;
        }
        return x;
    }
};