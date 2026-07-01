class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty()) return 0;
        int i = 0;
        while(i<nums.size()){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
            }
            else{
                i++;
            }
        }
        // erase(nums, val);
        return nums.size();
    }
};