#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#define  N 10
void Merge(int *a,int *L,int leftCount,int *R,int rightCount) {
	int i,j,k;

	i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount) {
		if(L[i]  < R[j]) a[k++] = L[i++];
		else a[k++] = R[j++];
	}
	while(i < leftCount) a[k++] = L[i++];
	while(j < rightCount) a[k++] = R[j++];
}

void MergeSort(int *a,int n) {
	int mid,i, *L, *R;
	if(n < 2) return; 

	mid = n/2;   

	L = (int*)malloc(mid*sizeof(int)); 
	R = (int*)malloc((n- mid)*sizeof(int)); 
	
	for(i = 0;i<mid;i++) L[i] = a[i];
	for(i = mid;i<n;i++) R[i-mid] = a[i];

	MergeSort(L,mid);
	MergeSort(R,n-mid); 
	Merge(a,L,mid,R,n-mid); 
        free(L);
        free(R);
}

int main()
{
	
	int a[N] = {0};  
	int i;

    int t=0;
    int v=0;

    srand(time(NULL));

    for(t=0;t<N;t++)
    {
     v=rand()%100;
     a[t]=v;
     printf("%d\n",a[t]);
    }

    printf("\n");
	MergeSort(a,N);

	for(i = 0;i<N;i++) 
     {
      printf("%d\n",a[i]);
     }
	return 0;
}
