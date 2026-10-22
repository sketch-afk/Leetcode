class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        // if(n==1 && nums[0]==target) return {0};
        vector<int> a;
        for(int i = 0; i<n; i++){
            if(nums[i]==target){
                a.push_back(i);
            }
        }return a;
    }
};