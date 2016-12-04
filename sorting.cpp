#include <iostream>
using namespace std;

// Using array pointer
int *BubbleSortPointer(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - 1; j++)
    {
      if (*(arr + j) > *(arr + j + 1))
      {
        int temp = *(arr + j);
        *(arr + j) = *(arr + j + 1);
        *(arr + j + 1) = temp;
      }
    }
  }
  return arr;
}

// Passing Array
void BubbleSortArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  return;
}

void InsertionSort(int num[], int numLength)
{
  int i, j, key;
  for (j = 1; j < numLength; j++) // Start with 1 (not 0)
  {
    key = num[j];
    for (i = j - 1; (i >= 0) && (num[i] > key); i--) // Smaller values move up
                                                     // switch num[i] > key for descending
    {
      num[i + 1] = num[i];
    }
    num[i + 1] = key; //Put key into its proper location
  }
  return;
}

void Merge(int *a, int *b, int start, int halfpoint, int end)
{
  int h, i, j, k;
  h = start;
  i = start;
  j = halfpoint + 1;

  while ((h <= halfpoint) && (j <= end))
  {
    if (a[h] <= a[j])
    {
      b[i] = a[h];
      h++;
    }
    else
    {
      b[i] = a[j];
      j++;
    }
    i++;
  }
  if (h > halfpoint)
  {
    for (k = j; k <= end; k++)
    {
      b[i] = a[k];
      i++;
    }
  }
  else
  {
    for (k = h; k <= halfpoint; k++)
    {
      b[i] = a[k];
      i++;
    }
  }

  // Write the final sorted array to our original one
  for (k = start; k <= end; k++)
  {
    a[k] = b[k];
  }
}

void MergeSort(int *a, int *b, int start, int end)
{
  int halfpoint;
  if (start < end)
  {
    halfpoint = (start + end) / 2;
    MergeSort(a, b, start, halfpoint);
    MergeSort(a, b, halfpoint + 1, end);
    Merge(a, b, start, halfpoint, end);
  }
}

int main()
{
  int p[4] = {2, 3, 5, 1};
  int *test;
  int *test2 = new int[4];
  
  for (int i = 0; i < 4; ++i)
    *(test2 + i) = 4 - i;
  
  for (int i = 0; i < 4; ++i)
    cout << " " << *(test2 + i);
  cout << endl;

  InsertionSort(test2, 4);

  for (int i = 0; i < 4; ++i)
    cout << " " << *(test2 + i);
  cout << endl;
  return 0;

  int num;
  cout << "How many numbers do you want to sort: ";
  cin >> num;
  int a[num];
  int b[num];
  for (int i = 0; i < num; i++)
  {
    cout << (i + 1) << ": ";
    cin >> a[i];
  }

  // Start merge sort
  MergeSort(a, b, 0, num - 1);

  // Print the sorted array
  cout << endl;
  for (int i = 0; i < num; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}