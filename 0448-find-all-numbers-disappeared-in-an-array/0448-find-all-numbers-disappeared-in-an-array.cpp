class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        int n = nums.size();

        // Step 1: Mark the numbers that are present
        for(int i = 0; i < n; i++)
        {
            int index = abs(nums[i]) - 1;

            // Make the value negative to mark it as present
            if(nums[index] > 0)
            {
                nums[index] = -nums[index];
            }
        }

        // Step 2: Find the indices which are still positive
        vector<int> ans;

        for(int i = 0; i < n; i++)
        {
            if(nums[i] > 0)
            {
                // i + 1 is missing
                ans.push_back(i + 1);
            }
        }

        return ans;
    }
};