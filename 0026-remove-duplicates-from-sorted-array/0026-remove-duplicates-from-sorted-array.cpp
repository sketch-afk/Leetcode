class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // if (nums.empty()) return 0;

        // int k = 1;

        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] != nums[k - 1]) {
        //         nums[k] = nums[i];
        //         k++;
        //     }
        // }

        // return k;

        // if (nums.empty()) return 0;
        // int n = nums.size();
        // set<int> st;
        // for(int i = 0; i<n; i++){
        //     st.insert(nums[i]);
        // }
        // int k = 0;
        // for(auto it: st){
        //     nums[k++] = it;
        // }
        // return k;

        if (nums.empty()) return 0;
        int n = nums.size();
        int k = 0;
        for(int i = 1; i<n; i++){
            if(nums[k]!=nums[i]){
                nums[k+1] = nums[i];
                k++;
            }
        }
        return k+1;
    }
};