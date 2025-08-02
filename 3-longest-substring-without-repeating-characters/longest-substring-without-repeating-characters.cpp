class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0, maxi = 0;
        vector<int> hash(256, -1);
        int n = s.size();

        while (r < n) {
            if (hash[s[r]] != -1 && hash[s[r]] >= l) {
                l = hash[s[r]] + 1; // shift left pointer
            }
            hash[s[r]] = r; // update latest index
            maxi = max(maxi, r - l + 1); // update max length
            r++;
        }
        return maxi;
    }
};