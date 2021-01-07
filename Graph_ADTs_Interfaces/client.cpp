#include <iostream>
#include <stdlib.h>
#include "GRAPH.cc"

#include "IO.cc"
#include "CC.cc"
using namespace std;
int main(int arc, char *argv[])
{
    int V = atoi(argv[1]);
    GRAPH G(V);
    IO<GRAPH>::scan(G);
    cout<< G.E() << "edges";
    CC<GRAPH> Gcc(G);
    cout<<Gcc.count()<<"components" << endl;
	return 0;
}
