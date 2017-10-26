#include <stdio.h>
#include <time.h>
#define N 10

int heapSize;

void Heapify(int* A, int i)
{
  int l = 2 * i + 1;
  int r = 2 * i + 2;
  int largest;

  if(l <= heapSize && A[l] > A[i])
    largest = l;
  else
    largest = i;
  if(r <= heapSize && A[r] > A[largest])
    largest = r;
  if(largest != i)
    {
      int temp = A[i];
      A[i] = A[largest];
      A[largest] = temp;
      Heapify(A, largest);
    }
}

void BuildHeap(int* A)
{
  heapSize = N - 1;
  int i;
  for(i = (N - 1) / 2; i >= 0; i--)
    Heapify(A, i);
}

void HeapSort(int* A)
{
  BuildHeap(A);
  int i;
  for(i = N - 1; i > 0; i--)
    {
      int temp = A[heapSize];
      A[heapSize] = A[0];
      A[0] = temp;
      heapSize--;
      Heapify(A, 0);
    }
}

int main()
{
  int tab[N] = {0};
  int t=0;
  int v=0;

  srand(time(NULL));
  for(t=0;t<N;t++)
  {
    v=rand()%100;
    tab[t]=v;
    printf("\n%d\n", tab[t]);

  }
                                    

  printf("\n\n");

  HeapSort(tab);
  int i;
  for(i = 0; i < N; i++)
    printf("\n%d\n",tab[i]);
  return 0;
}
