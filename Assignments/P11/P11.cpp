class Solution {
public:
    int maxArea(vector<int>& height) {
        int L = 0;
        int R = height.size() - 1;

        int max = 0;

        while(L <= R){
            int W = min(height[L], height[R]) * (R - L);
            
            max = (W > max)? W : max;

            if(height[L] < height[R]){
                L++;
            } else{
                R--;
            }
        }

        return max;
    }
};