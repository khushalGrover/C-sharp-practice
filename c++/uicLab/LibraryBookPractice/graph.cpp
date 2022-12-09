/// TODO: adjustencing matric and list....

#include<stdio.h>

//  number of vertices
#define V 4

//  this is value is used to reprsent vertices not conneccted to each others
#define INF 999999

/*  to print solution matrix  */
void printSolution(int dist[][V]); // here second index is assine V

// to solve
void floydWarshall(int dist[][V])
{
    for(int k =0;k < V; k++)
    {
      // Pick all vertices as source one by one by one
      for (int i = 0; i < V; i++) {
        // Pick all vertcies as distination for the above picked source
        for (int j = 0; j < V; j++) {
          // dist[i][j]
          if(dist[i][k] + dist[k][j] < dist[i][j])
              dist[i][j] = dist[i][k] + dist[k][j];
        }
      }
    }
    printSolution(dist);
}
void printSolution(int dist[][V])
{
  print("The folloowing matrix shows the shortest distance between every pair of vertices \n");
  for (int i = 0; i < V; i++) {
    for (int j = 0; j < V; j++) {
      if(dist[i][j] == INF)
      {
        print("%7s", INF);
      }
      else
      {
        print("%7d", INF);
      }
    }
  }
}

int main()
{
  int graph[V][V] = {
                  {0, 5, INF, 10},
                  {INF, 0, 3, INF},
                  {INF, , , },
                  {INF, , , }
                };



}
