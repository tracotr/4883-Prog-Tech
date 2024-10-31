class Solution {
public:
    int orientation(vector<int>& p, vector<int>& q, vector<int>& r) {
        return ((q[1] - p[1]) * (r[0] - q[0])) - ((q[0] - p[0]) * (r[1] - q[1]));
    }

    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        if (trees.size() <= 3) {
            return trees;
        }

        sort(trees.begin(), trees.end(), [](vector<int>& p, vector<int>& q) {
            return p[0] < q[0] || (p[0] == q[0] && p[1] < q[1]);
        });

        vector<vector<int>> ans;

        for (int i = 0; i < trees.size(); ++i) {
            while (ans.size() >= 2 &&
                   orientation(ans[ans.size() - 2], ans.back(),
                               trees[i]) < 0) {
                ans.pop_back();
            }
            ans.push_back(trees[i]);
        }

        if (ans.size() == trees.size()) return ans;
        
        ans.pop_back();

        for (int i = trees.size() - 1; i >= 0; --i) {
            while (ans.size() >= 2 &&
                   orientation(ans[ans.size() - 2], ans.back(),
                               trees[i]) < 0) {
                ans.pop_back();
            }
            ans.push_back(trees[i]);
        }

        ans.pop_back();

        return ans;
    }
};