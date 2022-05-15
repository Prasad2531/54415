#include <iostream>
using namespace std;

void swapping(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void display(int *array, int size)
{
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

void selectionSort(int *array, int size)
{
  int i, j, imin;
  for (i = 0; i < size - 1; i++)
  {
    imin = i;
    for (j = i + 1; j < size; j++)
      if (array[j] < array[imin])
        imin = j;

    swap(array[i], array[imin]);
  }
}

int main()
{
  int n;
  cout << "\n Enter the number of elements: ";
  cin >> n;
  int arr[n];

  cout << "\n Enter elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "\n\tArray before Sorting: ";
  display(arr, n);

  selectionSort(arr, n);

  cout << "\n\tArray after Sorting: ";
  display(arr, n);
}