 #include <iostream>
using namespace std;
#define INFINITY 9999
#define MAX 15

void Dijkstra(int Graph[MAX][MAX], int n, int start) {
  int cost[MAX][MAX], distance[MAX], pred[MAX];
  int visited[MAX], count, mindistance, nextnode, i, j;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      if (Graph[i][j] == 0)
        cost[i][j] = INFINITY;
      else
        cost[i][j] = Graph[i][j];

  for (i = 0; i < n; i++) {
    distance[i] = cost[start][i];
    pred[i] = start;
    visited[i] = 0;
  }

  distance[start] = 0;
  visited[start] = 1;
  count = 1;

  while (count < n - 1) {
    mindistance = INFINITY;

    for (i = 0; i < n; i++)
      if (distance[i] < mindistance && !visited[i]) {
        mindistance = distance[i];
        nextnode = i;
      }

    visited[nextnode] = 1;
    for (i = 0; i < n; i++)
      if (!visited[i])
        if (mindistance + cost[nextnode][i] < distance[i]) {
          distance[i] = mindistance + cost[nextnode][i];
          pred[i] = nextnode;
        }
    count++;
  }
  // for (i = 0; i < n; i++)
  //   if (i != start) {
  //     cout << "Distance from source to " << i << ": " << distance[i] << endl;
  //   }
  i=8;
  cout << "Distance from source to " << i << ": " << distance[i] << endl;
  i=13;
  cout << "Distance from source to " << i << ": " << distance[i] << endl;
}


int main() {
  int graph[MAX][MAX], i, j, n, source;
  source = 12;
  n = 16;

  graph[0][0] = 0;
  graph[0][1] = 1;
  graph[0][2] = 0;
  graph[0][3] = 0;
  graph[0][4] = 0;
  graph[0][5] = 0;
  graph[0][6] = 0;
  graph[0][7] = 0;
  graph[0][8] = 0;
  graph[0][9] = 4;
  graph[0][10] = 0;
  graph[0][11] = 0;
  graph[0][12] = 0;
  graph[0][13] = 0;
  graph[0][14] = 0;
  graph[0][15] = 0;

  graph[1][0] = 1;
  graph[1][1] = 0;
  graph[1][2] = 1;
  graph[1][3] = 0;
  graph[1][4] = 0;
  graph[1][5] = 0;
  graph[1][6] = 0;
  graph[1][7] = 0;
  graph[1][8] = 0;
  graph[1][9] = 2;
  graph[1][10] = 0;
  graph[1][11] = 0;
  graph[1][12] = 0;
  graph[1][13] = 0;
  graph[1][14] = 0;
  graph[1][15] = 0;

  graph[2][0] = 0;
  graph[2][1] = 1;
  graph[2][2] = 0;
  graph[2][3] = 0;
  graph[2][4] = 0;
  graph[2][5] = 0;
  graph[2][6] = 0;
  graph[2][7] = 0;
  graph[2][8] = 0;
  graph[2][9] = 0;
  graph[2][10] = 2;
  graph[2][11] = 0;
  graph[2][12] = 0;
  graph[2][13] = 0;
  graph[2][14] = 0;
  graph[2][15] = 0;

  graph[3][0] = 0;
  graph[3][1] = 0;
  graph[3][2] = 0;
  graph[3][3] = 0;
  graph[3][4] = 1;
  graph[3][5] = 0;
  graph[3][6] = 0;
  graph[3][7] = 0;
  graph[3][8] = 0;
  graph[3][9] = 0;
  graph[3][10] = 5;
  graph[3][11] = 2;
  graph[3][12] = 0;
  graph[3][13] = 0;
  graph[3][14] = 0;
  graph[3][15] = 0;

  graph[4][0] = 0;
  graph[4][1] = 0;
  graph[4][2] = 0;
  graph[4][3] = 1;
  graph[4][4] = 0;
  graph[4][5] = 0;
  graph[4][6] = 0;
  graph[4][7] = 0;
  graph[4][8] = 0;
  graph[4][9] = 0;
  graph[4][10] = 0;
  graph[4][11] = 6;
  graph[4][12] = 0;
  graph[4][13] = 0;
  graph[4][14] = 0;
  graph[4][15] = 0;

  graph[5][0] = 0;
  graph[5][1] = 0;
  graph[5][2] = 0;
  graph[5][3] = 0;
  graph[5][4] = 0;
  graph[5][5] = 0;
  graph[5][6] = 0;
  graph[5][7] = 0;
  graph[5][8] = 0;
  graph[5][9] = 0;
  graph[5][10] = 0;
  graph[5][11] = 0;
  graph[5][12] = 7;
  graph[5][13] = 2;
  graph[5][14] = 0;
  graph[5][15] = 0;

  graph[6][0] = 0;
  graph[6][1] = 0;
  graph[6][2] = 0;
  graph[6][3] = 0;
  graph[6][4] = 0;
  graph[6][5] = 1;
  graph[6][6] = 0;
  graph[6][7] = 1;
  graph[6][8] = 0;
  graph[6][9] = 0;
  graph[6][10] = 0;
  graph[6][11] = 0;
  graph[6][12] = 0;
  graph[6][13] = 0;
  graph[6][14] = 2;
  graph[6][15] = 0;

  graph[7][0] = 0;
  graph[7][1] = 0;
  graph[7][2] = 0;
  graph[7][3] =0;
  graph[7][4] = 0;
  graph[7][5] = 0;
  graph[7][6] = 1;
  graph[7][7] = 0;
  graph[7][8] = 0;
  graph[7][9] = 0;
  graph[7][10] = 0;
  graph[7][11] = 0;
  graph[7][12] = 0;
  graph[7][13] = 0;
  graph[7][14] = 0;
  graph[7][15] = 2;

  graph[8][0] = 0;
  graph[8][1] = 0;
  graph[8][2] = 0;
  graph[8][3] = 0;
  graph[8][4] = 0;
  graph[8][5] = 0;
  graph[8][6] = 0;
  graph[8][7] = 0;
  graph[8][8] = 0;
  graph[8][9] = 0;
  graph[8][10] = 0;
  graph[8][11] = 8;
  graph[8][12] = 0;
  graph[8][13] = 0;
  graph[8][14] = 0;
  graph[8][15] = 0;

  graph[9][0] = 4;
  graph[9][1] = 2;
  graph[9][2] = 0;
  graph[9][3] = 0;
  graph[9][4] = 0;
  graph[9][5] = 0;
  graph[9][6] = 0;
  graph[9][7] = 0;
  graph[9][8] = 0;
  graph[9][9] = 0;
  graph[9][10] = 1;
  graph[9][11] = 0;
  graph[9][12] = 0;
  graph[9][13] = 0;
  graph[9][14] = 0;
  graph[9][15] = 0;

  graph[10][0] = 0;
  graph[10][1] = 0;
  graph[10][2] = 2;
  graph[10][3] = 5;
  graph[10][4] = 0;
  graph[10][5] = 0;
  graph[10][6] = 0;
  graph[10][7] = 0;
  graph[10][8] = 0;
  graph[10][9] = 1;
  graph[10][10] = 0;
  graph[10][11] = 0;
  graph[10][12] = 0;
  graph[10][13] = 0;
  graph[10][14] = 0;
  graph[10][15] = 0;

  graph[11][0] = 0;
  graph[11][1] = 0;
  graph[11][2] = 0;
  graph[11][3] = 2;
  graph[11][4] = 6;
  graph[11][5] = 0;
  graph[11][6] = 0;
  graph[11][7] = 0;
  graph[11][8] = 8;
  graph[11][9] = 0;
  graph[11][10] = 0;
  graph[11][11] = 0;
  graph[11][12] = 1;
  graph[11][13] = 0;
  graph[11][14] = 0;
  graph[11][15] = 0;

  graph[12][0] = 0;
  graph[12][1] = 0;
  graph[12][2] = 0;
  graph[12][3] = 0;
  graph[12][4] = 0;
  graph[12][5] = 7;
  graph[12][6] = 0;
  graph[12][7] = 0;
  graph[12][8] = 0;
  graph[12][9] = 0;
  graph[12][10] = 0;
  graph[12][11] = 1;
  graph[12][12] = 0;
  graph[12][13] = 0;
  graph[12][14] = 0;
  graph[12][15] = 0;

  graph[13][0] = 0;
  graph[13][1] = 0;
  graph[13][2] = 0;
  graph[13][3] = 0;
  graph[13][4] = 0;
  graph[13][5] = 2;
  graph[13][6] = 0;
  graph[13][7] = 0;
  graph[13][8] = 0;
  graph[13][9] = 0;
  graph[13][10] = 0;
  graph[13][11] = 0;
  graph[13][12] = 0;
  graph[13][13] = 0;
  graph[13][14] = 0;
  graph[13][15] = 0;

  graph[14][0] = 0;
  graph[14][1] = 0;
  graph[14][2] = 0;
  graph[14][3] = 0;
  graph[14][4] = 0;
  graph[14][5] = 0;
  graph[14][6] = 2;
  graph[14][7] = 0;
  graph[14][8] = 0;
  graph[14][9] = 0;
  graph[14][10] = 0;
  graph[14][11] = 0;
  graph[14][12] = 0;
  graph[14][13] = 0;
  graph[14][14] = 0;
  graph[14][15] = 0;

  graph[15][0] = 0;
  graph[15][1] = 0;
  graph[15][2] = 0;
  graph[15][3] = 0;
  graph[15][4] = 0;
  graph[15][5] = 0;
  graph[15][6] = 0;
  graph[15][7] = 2;
  graph[15][8] = 0;
  graph[15][9] = 0;
  graph[15][10] = 0;
  graph[15][11] = 0;
  graph[15][12] = 0;
  graph[15][13] = 0;
  graph[14][14] = 0;
  graph[15][15] = 0;

  Dijkstra(graph, n, source);
}