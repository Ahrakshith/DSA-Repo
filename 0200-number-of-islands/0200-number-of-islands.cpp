class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
      int n=grid.size(); // size of row
      int m=grid[0].size(); // size of column

      int dx[]={0, 0, 1, -1}; // 4 directions in          x      axis
      int dy[]={1,-1,0,0}; // 4 directions in y 

      vector<vector<int>> vis(n, vector<int>(m, 0)); 

      int count=0;

    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){

       if(!vis[i][j] && grid[i][j] == '1'){
    
            queue<pair<int,int>> q; 
            q.push({i,j}); 
            count++;
            vis[i][j]=1;
        
     
              //BFS Implemenation
              while(!q.empty()){

                  auto[x,y]=q.front();
                   
                    q.pop();
                  
                    for(int dir=0;dir<4;dir++){
        

                    int nx=x+dx[dir];
                    int ny=y+dy[dir];

                    if(nx<n && nx>=0 && ny>=0 && ny<m ){
                      if(!vis[nx][ny] && grid[nx][ny] == '1'){
                        q.push({nx,ny});
                        vis[nx][ny]=1;
                      }
                    }
                    
                    }
                  
              }
             }
        
          }
        } 
          return count;
      }
};