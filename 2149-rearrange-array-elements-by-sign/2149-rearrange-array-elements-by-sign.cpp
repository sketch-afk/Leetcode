class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> p;
        // vector<int> ne;
        // for(int i = 0; i<n; i++){
        //     if(nums[i]>0) p.push_back(nums[i]);
        //     else ne.push_back(nums[i]);
        // }
        // for(int i = 0; i<p.size();i++){
        //     nums[2*i] = p[i];
        //     nums[2*i+1] = ne[i];
        // }
        // return nums;
        int n = nums.size();
        vector<int> ans(n);
        int pos = 0, neg=1;
        for(int num : nums){
            if(num>0){
                ans[pos] = num;
                pos+=2;
            }
            else{
                ans[neg] = num;
                neg+=2;
            }
        }
        return ans;
    }
};