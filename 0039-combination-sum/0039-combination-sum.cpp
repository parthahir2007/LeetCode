class Solution {
public:
    void solve(vector<int>& candidates, int index, int remaining,
               vector<int>& current, vector<vector<int>>& ans)
    {
        if (remaining == 0)
        {
            ans.push_back(current);
            return;
        }

        if (index == candidates.size())
            return;

        // Take current element
        if (candidates[index] <= remaining)
        {
            current.push_back(candidates[index]);

            solve(candidates, index, remaining - candidates[index],
                  current, ans);

            // Backtracking
            current.pop_back();
        }

        // Skip current element
        solve(candidates, index + 1, remaining, current, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> current;

        solve(candidates, 0, target, current, ans);

        return ans;
    }
};