class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) return x;

        int L = 2;
        int R = x / 2;

        long mid;
        long long sq;
        
        while(L <= R){
            mid = L + (R - L)/2;
            sq = mid * mid;
            if(sq == x) return mid;
            else if(sq < x) L = mid + 1;
            else R = mid - 1;
        }

        return R;
    }
};