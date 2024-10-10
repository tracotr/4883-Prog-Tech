class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        // loop through arr
        // if island not visited, and '1'
        // dfs and add 1 to result
        //
        // dfs:
        // add all nearby '1' cords to visited

        int n = grid.size();
        int m = grid[0].size();
        int r = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '0')
                    continue;

                DFS(grid, i, j);
                r++;
            }
        }

        return r;
    }

    void DFS(vector<vector<char>>& g, int i, int j) {
        if (g[i][j] == '0')
            return;

        g[i][j] = '0';
        if (i + 1 >= 0 && i + 1 < g.size()) // down
            DFS(g, i + 1, j);
        if (i - 1 >= 0 && i - 1 < g.size()) // up
            DFS(g, i - 1, j);
        if (j + 1 >= 0 && j + 1 < g[0].size()) // right
            DFS(g, i, j + 1);
        if (j - 1 >= 0 && j - 1 < g[0].size()) // left
            DFS(g, i, j - 1);
    }
};