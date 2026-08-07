class Solution {
public:

    vector<int> beautifulArray(int n) {

        // Base case:
        // n = 1 hoy to only [1] possible chhe
        if (n == 1) {
            return {1};
        }

        // Odd numbers mate smaller beautiful array banavishu
        // ceil(n/2) = (n+1)/2
        vector<int> odd = beautifulArray((n + 1) / 2);

        // Even numbers mate smaller beautiful array banavishu
        // floor(n/2) = n/2
        vector<int> even = beautifulArray(n / 2);

        vector<int> ans;

        // Odd numbers generate karo
        //
        // Jo x = 1,2,3,...
        // 2*x - 1 = 1,3,5,...
        //
        // Etle beautiful array na elements ne
        // odd numbers ma convert kari rahya chhiye.
        for (int x : odd) {
            ans.push_back(2 * x - 1);
        }

        // Even numbers generate karo
        //
        // Jo x = 1,2,3,...
        // 2*x = 2,4,6,...
        //
        // Etle beautiful array na elements ne
        // even numbers ma convert kari rahya chhiye.
        for (int x : even) {
            ans.push_back(2 * x);
        }

        // Odd part + Even part combine kari ne
        // beautiful array return karo
        return ans;
    }
};