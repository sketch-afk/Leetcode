class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n = nums.size();
        // int ele = n/2;
        // for(int i = 0; i<n; i++){
        //     int c = 0;
        //     for(int j = 0; j<n; j++){
        //         if(nums[i]==nums[j]) c++;
        //     }
        //     if(c>ele) return nums[i];
        // }
        // return -1;


        // int n = nums.size();
        // int ele = n/2;
        // unordered_map<int, int> mp;
        // for(int n : nums){
        //     mp[n]++;
        // }
        // for(const auto& pair : mp){
        //     if(pair.second> ele) return pair.first;
        // }
        // return -1;

        // int n = nums.size();
        // unordered_map<int, int> mp;
        // for(int i = 0; i<n; i++){
        //     mp[nums[i]]++;
        //     if(mp[nums[i]]>n/2) return nums[i];
        // }
        // return -1;

        int n = nums.size();
        int c = 0;
        int ele;
        for(int i = 0; i<n; i++){
            if(c==0){
                c++;
                ele = nums[i];
            }
            else if(nums[i]==ele){
                c++;
            }
            else{
                c--;
            }
        }
        int cnt = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]==ele){
                cnt++;
            }
        }
        if(cnt>n/2) return ele;
        return -1;
    }
};