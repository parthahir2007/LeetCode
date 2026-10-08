class Solution {
public:
    int ans = 0;

    void solve(vector<int>& nums, int i, int xr) {
        // All elements processed
        if (i == nums.size()) {
            ans += xr;
            return;
        }

        // Include nums[i]
        solve(nums, i + 1, xr ^ nums[i]);

        // Don't include nums[i]
        solve(nums, i + 1, xr);
    }

    int subsetXORSum(vector<int>& nums) {
        solve(nums, 0, 0);
        return ans;
    }
};