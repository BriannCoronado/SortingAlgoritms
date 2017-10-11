import random 
N=10000 # tamaño del arreglo
arr=[]
#Bubble Sort
def bubbleSort(arr):
    b=0;
    for i in range(N-1):
        if arr[i]>arr[i+1]:
            b=arr[i]
            arr[i]=arr[i+1]
            arr[i+1]=b



for i in range(N):
    v=random.randrange(0,N-1,1)
    arr.append(v)
    print(v)
 # las siguientes lineas representan el main como en C.

for i in range(N-1):
    bubbleSort(arr)

print("\n")

for i in range(N):
    print(arr[i])
