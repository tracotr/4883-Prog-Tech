class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        // dfs recursively go through image finding the ints at image[sr][sc]
        int original = image[sr][sc];
        DFS(image, sr, sc, original, color);
        return image;
    }

    void DFS(vector<vector<int>>& g, int i, int j, int& o, int& n) {
        // if not in bounds base case
        if (i < 0 || i >= g.size() || j < 0 || j >= g[0].size() ||
            g[i][j] == n || g[i][j] != o) {
            return;
        }

        g[i][j] = n;

        DFS(g, i + 1, j, o, n);
        DFS(g, i - 1, j, o, n);
        DFS(g, i, j + 1, o, n);
        DFS(g, i, j - 1, o, n);
    }
};