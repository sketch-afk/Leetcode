class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int c = 0;
            for(int j =0; j<n;j++){
                if(nums[j]==nums[i]){
                    c++;
                }
            }
            if(c==1) return nums[i];
        }
        return 0;

        // int maxx = nums[0];
        // for(int i = 1; i<n; i++){
        //     maxx= max(maxx, nums[i]);
        // }
        // // int hash[maxx]={0};
        // vector<int>hash(maxx+1,0);
        // for(int i = 0 ; i<n; i++){
        //     hash[nums[i]]++;
        // }
        // for(int i = 0; i<maxx+1; i++){
        //     if(hash[i]==1){
        //         return i;
        //     }
        // }
        // return 0;

        // unordered_map<int, int> frequencies;
        
        // // Step 1: Count the frequency of each number
        // for (int num : nums) {
        //     frequencies[num]++;
        // }
        
        // // Step 2: Find the number that appeared exactly once
        // for (auto& pair : frequencies) {
        //     if (pair.second == 1) {
        //         return pair.first;
        //     }
        // }
        
        // return 0;
    }
};