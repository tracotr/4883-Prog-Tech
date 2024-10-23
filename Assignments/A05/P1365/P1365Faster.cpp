class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        unordered_map<int, int> freq;

        for(int i = 0; i < nums.size(); i++){
            if(freq.find(sorted[i]) == freq.end()){
                freq[sorted[i]] = i;
            }
        }

        vector<int> ans;
        for(int i : nums){
            ans.push_back(freq[i]);
        }

        return ans;
    }
};