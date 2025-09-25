class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
       int n=sizeof(nums)/sizeof(nums[0]);
       set<int> s(nums.begin(),nums.end());
       nums.clear();
       nums.assign(s.begin(),s.end());
       return s.size();
    }
};