class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count = 0;      // Current consecutive 1's ni length
        int maxcount = 0;   // Maximum length store karva mate


        for(int i = 0; i < nums.size(); i++)
        {
            // Jo current element 1 hoy
            if(nums[i] == 1)
            {
                count++;

                // Maximum update karo
                if(count > maxcount)
                {
                    maxcount = count;
                }
            }

            // Jo 0 male to streak break thai jay
            else
            {
                count = 0;
            }
        }

        return maxcount;
    }
};