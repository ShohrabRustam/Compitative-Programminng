#include<iostream>
using namespace std;
int G[100][100];

int
gridTravelerProblem (int a, int b)
{
  if (a == 0 || b == 0)
    {
      G[a][b] = 0;
      return 0;
    }
  else if ((a == 1 && b == 1))
    {
      G[a][b] = 1;
      return 1;
    }
  else
    {

      if (G[a - 1][b] == -1)
	{
	  G[a - 1][b] = gridTravelerProblem (a - 1, b);
	}
      if (G[a][b - 1] = -1)
	{
	  G[a][b - 1] = gridTravelerProblem (a, b - 1);
	}
      return G[a - 1][b] + G[a][b - 1];
    }
}

int main ()
{
  int n, m;
  cin >> n >> m;
  for(int i=0;i<=n;i++){
      for(int j=0;j<=m;j++){
          G[i][j]=-1;
      }
  }
  
  int result = gridTravelerProblem (n, m);
  cout << result;
}
