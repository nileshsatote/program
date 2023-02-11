#include <iostream>
using namespace std;
int main()
{
  int r1, c1;
  cin >> r1 >> c1;

  int arrA[r1][c1];
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      cin >> arrA[i][j];
    }
  }

  int r2, c2;
  cin >> r2 >> c2;

  int arrB[r2][c2];
  for (int i = 0; i < r2; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      cin >> arrB[i][j];
    }
  }

  if (c2 != r2)
  {
    cout << "No operation on mertix";
  }

  int c[r1][c2];
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      int value = 0;
      for (int k = 0; k < r2; k++)
      {
        value += arrA[i][k] * arrB[k][j];
      }
      c[i][j] = value;
    }
  }

  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      cout << c[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}