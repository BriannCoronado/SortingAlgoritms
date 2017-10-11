#Bubble sort with less interactions
archivo=open("/home/briann/Python/random_words.txt","r")
#archivo=open("/home/briann/Python/100words.txt","r")
lista=archivo.readlines()
arr=lista[:]
iteraciones=0
intercambios=0
k=len(arr)-1
def bubbleSort(arr,iteraciones,intercambios,k):
    for i in range(k):
        b=[]
        iteraciones=iteraciones+1
        if arr[i]>arr[i+1]:
            b=arr[i][:]
            arr[i]=arr[i+1][:]
            arr[i+1]=b[:]
            intercambios=intercambios+1
    k=k-1
    return iteraciones,intercambios,k

for i in range(len(arr)-1):
    iteraciones,intercambios,k=bubbleSort(arr,iteraciones,intercambios,k)
print(arr)
print(" las iteraciones son %d" % iteraciones)
print(" los intercambios son %d" % intercambios)

