class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter=0;
        int r=grid.size();
        int c=grid[0].size();
         for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (grid[i][j] == 1) {
                // Check top edge
                if (i == 0 || grid[i - 1][j] == 0) {
                    perimeter++;
                }
                // Check bottom edge
                if (i == r - 1 || grid[i + 1][j] == 0) {
                    perimeter++;
                }
                // Check left edge
                if (j == 0 || grid[i][j - 1] == 0) {
                    perimeter++;
                }
                // Check right edge
                if (j == c - 1 || grid[i][j + 1] == 0) {
                    perimeter++;
                }
            }
        }
    }
    return perimeter;
    }
};