class Solution {
public:
    bool judgeSquareSum(int c) {

        // low pointer smallest possible number (0 thi start)
        long long low = 0;

        // high pointer largest possible number
        // sqrt(c) thi vadhare koi number nu square c karta moto thai jashe
        long long high = sqrt(c);


        // Two pointer approach
        while(low <= high)
        {
            // Current a^2 + b^2 calculate karo
            long long sum = low * low + high * high;


            // Jo sum exactly c hoy to a ane b mali gaya
            if(sum == c)
            {
                return true;
            }


            // Jo sum c karta nano hoy,
            // to low value vadharvi pade
            // kem ke low nu square vadhse to sum vadhse
            else if(sum < c)
            {
                low++;
            }


            // Jo sum c karta moto hoy,
            // to high value ochhi karvi pade
            // kem ke high nu square ochhu thase to sum ochhu thase
            else
            {
                high--;
            }
        }


        // Jo koi pan combination na male
        return false;
    }
};