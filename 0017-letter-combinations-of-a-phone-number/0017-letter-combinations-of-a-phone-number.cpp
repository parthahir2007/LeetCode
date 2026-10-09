class Solution {
public:
    void solve(string digits, int index, string& current,
               vector<string>& ans, vector<string>& mapping)
    {
        if (index == digits.size())
        {
            ans.push_back(current);
            return;
        }

        int num = digits[index] - '0';
        string letters = mapping[num];

        for (char ch : letters)
        {
            // Choose a letter
            current.push_back(ch);

            // Move to the next digit
            solve(digits, index + 1, current, ans, mapping);

            // Backtrack
            current.pop_back();
        }
    }

    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;

        if (digits.empty())
            return ans;

        vector<string> mapping = {
            "", "", "abc", "def", "ghi", "jkl",
            "mno", "pqrs", "tuv", "wxyz"
        };

        string current = "";

        solve(digits, 0, current, ans, mapping);

        return ans;
    }
};