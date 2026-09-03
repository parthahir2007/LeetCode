class Solution {
public:
    bool checkPowersOfThree(int n) {

        while(n>0)
        {
            int mod=n%3;
            n=n/3;
            if(mod==2)
            {
                return false;
            }
        }
        return true;
        
    }
};