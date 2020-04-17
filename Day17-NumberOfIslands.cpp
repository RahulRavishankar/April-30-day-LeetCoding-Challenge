class Solution {
public:
    void bfs(vector<vector<char>>& grid,int i,int j)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size() || grid[i][j]=='0')
            return;
        
        grid[i][j]='0';
        bfs(grid,i,j-1);
        bfs(grid,i,j+1);
        bfs(grid,i-1,j);
        bfs(grid,i+1,j);
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0)
            return 0;
        int n=grid.size();
        int m=grid[0].size();
        
        int islandCount=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j]=='1')
                    ++islandCount, bfs(grid,i,j);
        
        return islandCount;
    }
};
