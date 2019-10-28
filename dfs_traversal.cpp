 
#include<bits/stdc++.h> 
using namespace std; 
#define boost     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll        long long int
#define pair      pair<string, int>
#define pair1     pair<long long int,long long int>
#define pair2     pair<string,string>
#define pair3     pair<long long int,char>
#define mkp       make_pair
#define s1        second
#define pb           push_back    
#define pf           push_front
#define pob       pop_back
#define pof       pop_front
#define rev       reverse
#define mx        *max_element 
#define mi        *min_element 
#define asum      accumulate
#define b_s       binary_search  //(first_iterator, last_iterator, x) – Tests whether x exists in "SORTED VECTOR" or not.
#define del       erase        //arr.del(position))         
#define par       partition    //(beg, end, condition) 
#define q1        %1000000007
#define fl        forward_list
#define map2d          map<long long,map<long long , long long > >



void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 


void DFSUtil(int u, vector<int> adj[], 
                    vector<bool> &visited) 
{ 
    visited[u] = true; 
    cout << u << " "; 
    for (int i=0; i<adj[u].size(); i++) 
        if (visited[adj[u][i]] == false) 
            DFSUtil(adj[u][i], adj, visited); 
} 


void DFS(vector<int> adj[], int V) 
{ 
    vector<bool> visited(V, false); 
    for (int u=0; u<V; u++) 
        if (visited[u] == false) 
            DFSUtil(u, adj, visited); 
} 

int main() 
{ 
    

     
    // vector<int> *adj = new vector<int>[V]; 
    vector<int> adj[V]; 
    for(int i=0;i<V;i++)
    {
    cin>>x>>y;
    addEdge(adj,x,y);
    }
    DFS(adj, V); 
    
    return 0; 
} 
