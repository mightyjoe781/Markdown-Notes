### Graph Generators

**17.12 Random graph generator (random edges)**

````c++
static void randE(Graph &G, int E){
    for(int i = 0; i<E; i++)
    {
        int v = int(G.V()*rand()/(1.0 + RAND_MAX));   			int w = int(G.V()*rand()/(1.0 + RAND_MAX));
        G.insert(Edge(v,w));
    }
}
````

**17.13 Random graph generator (random graph)**

````c++
static void randG(Graph &G, int E){
    for(int i = 0; i<E; i++)
    {
		double p = 2.0*E/G.V() / (G.V()-1);
        for(int i = 0 ; i<G.V();i++ )
            for(int j = 0 ; j <i ;j++)
                if(rand()<p*RAND_MAX)
                    G.inert(Edge(i,j));
    }
}
````

**Program 17.14 Building a graph from pairs of symbols**

````c++
#include “ST.cc”
template <class Graph>
void IO<Graph>::scan(Graph &G)
{ 	string v, w;
    ST st;
    while (cin >> v >> w)
    G.insert(Edge(st.index(v), st.index(w)));
}
````

