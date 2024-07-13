
void bfs(vector<vector<int>> &adj,unordered_map<int,bool> &visited,vector<int> &ans,int node)
{
   queue<int>q;
   q.push(node);
   visited[node]=true;
   while(!q.empty())
   {
       int front_node = q.front();
       q.pop();
       ans.push_back(front_node);
       for(auto i : adj[front_node])
       {
           if(!visited[i])
           q.push(i);
           visited[i]=true;
       }
   }
}
vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    unordered_map<int,bool>visited;
    vector<int>ans;
    bfs(adj,visited,ans,0);
    return ans;
    
}
