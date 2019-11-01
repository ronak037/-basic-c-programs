 
# include <bits/stdc++.h>
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
 
class Graph 
{ 
    int V; 
    list<int> *adj; 
public: 
    Graph(int V); 
        void addEdge(int v, int w); 

    
    void BFS(int s); 
};

Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 

void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w);
} 

void Graph::BFS(int s) 
{ 
    
    bool *visited = new bool[V]; 
    for(int i = 0; i < V; i++) 
        visited[i] = false; 

   
    list<int> queue; 

   
    visited[s] = true; 
    queue.push_back(s); 

    list<int>::iterator i; 

    while(!queue.empty()) 
    { 
       
        s = queue.front(); 
        cout << s << " "; 
        queue.pop_front(); 

        for (i = adj[s].begin(); i != adj[s].end(); ++i) 
        { 
            if (!visited[*i]) 
            { 
                visited[*i] = true; 
                queue.push_back(*i); 
            } 
        } 
    } 
} 

int main() 
{ 
    ll v;
    cin>>v
    Graph g(v); 
    for(int i=0;i<edges;i++)
    {
        cin>>x>>y;
        g.addEdge(x,y);
    }
     
    g.BFS(2); 

    return 0; 
} 

  
