#include <iostream>
using namespace std;

class Sort
{
public:
  int n = 5;

  char arr[5] = {5,4,2,1,3};

  virtual void sort() = 0;
};


class Bubble : public Sort
{
public:

  void swap(int *xp, int *yp)
  {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
  }

  void sort()
  {
   int i, j;
   for (i = 0; i < n-1; i++)
   {
       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
       {
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
        }
    }
    cout << "Bubble Finished" << endl;
  }
};

class Insertion : public Sort
{
public:
  void sort()
  {
    int i, key, j;
    for (i = 1; i < n; i++)
    {
       key = arr[i];
       j = i-1;

       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
     }
     cout << "Insertion Finished" << endl;
   }
};

class Selection : public Sort
{
public:

  void swap(int *xp, int *yp)
  {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
  }

  void sort()
  {
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        {
          if (arr[j] < arr[min_idx])
            min_idx = j;
        }

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
    cout << "Selection Finished" << endl;
  }
};
