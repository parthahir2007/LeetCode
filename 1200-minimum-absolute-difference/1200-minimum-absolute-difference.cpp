class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
    {
        // Sort the array
        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;

        int minDiff = INT_MAX;

        for(int i = 0; i < arr.size() - 1; i++)
        {
            int diff = arr[i + 1] - arr[i];

            // Found a smaller difference
            if(diff < minDiff)
            {
                minDiff = diff;

                // Old pairs are no longer useful
                ans.clear();

                // Add current pair
                ans.push_back({arr[i], arr[i + 1]});
            }

            // Same minimum difference found
            else if(diff == minDiff)
            {
                ans.push_back({arr[i], arr[i + 1]});
            }
        }

        return ans;
    }
};