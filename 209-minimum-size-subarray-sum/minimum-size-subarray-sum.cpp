class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0,start=-1,minl=INT_MAX,sz=nums.size(),sum=0;

        while(r<sz){
            sum+=nums[r];
            r++;
            while(sum>=target){
                minl=min(minl,r-l);
                sum-=nums[l];
                l++;
            }
        }
        return minl== INT_MAX ? 0:minl;
    }
};