class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // [100,4,200,1,3,2]
        unordered_set<int> s(nums.begin(), nums.end());
        // [1,2,3,4,100,200] much easier to check

        int longest = 0;

        for (int num : s) {
            // if curr num - 1 is not in set
            if (s.find(num - 1) == s.end()) { 
                int length = 1;
                int nextNum = num + 1;
                // while curr num + 1 is in set
                while (s.find(nextNum) != s.end()) {
                    length++;
                    nextNum++;
                }

                // longest is either longest found or if more of sequence is found, that 
                longest = max(longest, length);
            }
        }

        return longest;
    }
};