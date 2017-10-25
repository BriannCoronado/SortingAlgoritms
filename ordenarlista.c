#include<stdio.h>
#include<time.h>

#define N 10

void bubbleSort( int a[N])
{
  int i;
  for(i=0;i<N-1;i++)
  {
     int b;
     if(a[i]>a[i+1])
     {
         b=a[i];
         a[i]=a[i+1];
         a[i+1]=b;
     }
   
  }
  
}

int main()
{
  int arr[N]={0};
  int i=0;
  int v=0;
  int p;
  int k;
  srand(time(NULL));
  
  for(i=0;i<N;i++)
  {
     v=rand()%100;
     arr[i]=v;
     printf("%d\n",v);
  }
  for(p=0;p<=N-1;p++)
  {
  bubbleSort(arr);
  }
   printf("\n"); 
  for(k=0;k<N;k++)
  {
    printf("%d\n",arr[k]);

   }
return 0;
}
