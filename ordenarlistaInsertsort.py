#Insert sort
import random
N=5 # tamaño del arreglo
arr=[]
prueba=[]
arr1=[]
numero=0
def InsertSort(arr,arr1,numero):
    bandera=0
    p=0
    if numero==0:
        arr1.insert(0,arr[0])
    else:
        for i in range(numero):
            if arr[numero]<=arr1[i]:
                arr1.insert(i,arr[numero])
                p=p+1
                break
        if p==0:
            arr1.insert(numero,arr[numero])
    return arr,arr1,numero


for i in range(N):
    v=random.randrange(0,N-1,1)
    arr.append(v)

# las siguientes lineas representan el main como en C.
prueba=arr[:]
prueba.sort()
if prueba==arr:
    print("La lista esta ordenada")
    print(arr)
else:

    for i in range(N):
        arr,arr1,numero=InsertSort(arr,arr1,numero)
        numero=numero+1
    print("\n")
    print(arr)

    print("\n")
    print(arr1)
