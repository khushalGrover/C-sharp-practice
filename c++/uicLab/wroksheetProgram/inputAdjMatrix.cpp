#include <iostream>
using namespace std;

int main()
{
	// n is the number of vertices
	// m is the number of edges
	int n, m;
    cout<<"enter V and E";
	cin >> n >> m;
	int adjMat[n + 1][n + 1];
	for (int i = 0; i < m; i++) {
		int u, v;
        cout<<"> ";
		cin >> u >> v;
		adjMat[u][v] = 1;
		adjMat[v][u] = 1;
	}

    cout<<"Out put";
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < u; j++) {
            int u, v;
            cout<<adjMat[u][v];
        }
        cout<<end;
	}
	return 0;
}
