#include <iostream>

using namespace std;

int
main ()
{
  cout << "Input array elements" << endl;
  int ar[10];
  for (int x = 0; x < 10; x++)
    {
      cin >> ar[x];
    }
  for (int x = 0; x <9; x++)
    {

      int min = x;
      for (int y = x + 1; y < 10; y++)
	{
	  if (ar[y] < ar[min])
	    {
	      min = y;
	    }
	}
      int temp = ar[min];
      ar[min] = ar[x];
      ar[x] = temp;
    }
  cout << "Sorted array" << endl;
  for (int x = 0; x < 10; x++)
    {
      cout << ar[x] << endl;
    }
}