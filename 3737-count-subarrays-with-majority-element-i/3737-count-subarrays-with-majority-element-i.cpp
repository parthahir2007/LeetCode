class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int ans = 0;

        // Start point of subarray
        for(int i = 0; i < n; i++)
        {
            int count = 0;

            // End point of subarray
            for(int j = i; j < n; j++)
            {
                // Count target in current subarray
                if(nums[j] == target)
                {
                    count++;
                }

                // Length of current subarray
                int length = j - i + 1;

                // Check if target is majority
                if(count > length / 2)
                {
                    ans++;
                }
            }
        }

        return ans;
    }
};