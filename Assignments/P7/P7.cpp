class Solution {
public:
    int reverse(int x) {
        int r = 0;

        while(x != 0){
            if((r >= 0 && r <= INT_MAX/10) || (r <= 0 && r >= INT_MIN/10))
                 r *= 10;
            else
                return 0;

            r += x % 10;
            x /= 10;
        }

        return r;
    }
};