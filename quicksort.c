// quickSort.c
#include <stdio.h>
#include <time.h>
#define N 10
void quickSort( int[], int, int);
int partition( int[], int, int);


void main() 
{
    int a[N]={0};
    int t=0;
    int v=0;
    
    srand(time(NULL));

    for(t=0;t<N;t++)
    {
        v=rand()%100;
        a[t]=v;

    }


	int i;
	printf("\n\ ");
	for(i = 0; i < 9; ++i)
		printf(" %d\n ", a[i]);

	quickSort( a, 0, 8);

	printf("\n\ ");
	for(i = 0; i < 9; ++i)
		printf(" %d\n ", a[i]);

}



void quickSort( int a[], int l, int r)
{
   int j;

   if( l < r ) 
   {
   	// divide and conquer
        j = partition( a, l, r);
       quickSort( a, l, j-1);
       quickSort( a, j+1, r);
   }
	
}



int partition( int a[], int l, int r) {
   int pivot, i, j, t;
   pivot = a[l];
   i = l; j = r+1;
		
   while( 1)
   {
   	do ++i; while( a[i] <= pivot && i <= r );
   	do --j; while( a[j] > pivot );
   	if( i >= j ) break;
   	t = a[i]; a[i] = a[j]; a[j] = t;
   }
   t = a[l]; a[l] = a[j]; a[j] = t;
   return j;
}



