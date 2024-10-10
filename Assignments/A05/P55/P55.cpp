class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int k = n - 1;

        for(int i = n - 2; i >= 0; i--){
            if(k <= i + nums[i])
                k = i;
        }

        return k == 0;
    }
};