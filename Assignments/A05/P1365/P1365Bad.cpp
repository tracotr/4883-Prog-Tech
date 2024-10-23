class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> smaller;

        for(int i : nums){
            int s = 0;
            for(int j : nums){
                if(i != j && i > j){
                    s++;
                } 
            }
            smaller.push_back(s);
        }

        return smaller;
    }
};