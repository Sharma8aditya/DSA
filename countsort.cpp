#include "bits/stdc++.h"
using namespace std;

int findmax (int arr[], int n)
{
  int max = INT32_MIN;
  for (int i = 0; i < n; i++)
    {
      if (arr[i] > max)
	{
	  max = arr[i];
	}
    }
  return max;
}

void countsort (int arr[], int size)
{
  int max, i, j;
  max = findmax (arr, size);
  int c[max];
  for (int i = 0; i < max + 1; i++)
    {
      c[i] = 0;
    }
  for (int i = 0; i < size; i++)
    {
      c[arr[i]]++;
    }
  i = 0, j = 0;
  while (j < max + 1)
    {
      if (c[j] > 0)
	{
	  arr[i++] = j;
	  c[j]--;
	}
      else
	{
	  j++;
	}
    }

  for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
}

int main ()
{
  int arr[] = { 11, 13, 14, 13, 12, 9, 8, 8, 3, 15 };
  int n = 10;
  countsort (arr, n);
}
