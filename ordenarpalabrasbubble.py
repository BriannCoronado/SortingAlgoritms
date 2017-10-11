#Bubble sort
archivo=open("/home/briann/Python/random_words.txt","r")
#archivo=open("/home/briann/Python/100words.txt","r")
lista=archivo.readlines()
arr=lista[:]
iteraciones=0
intercambios=0
def bubbleSort(arr,iteraciones,intercambios):
    for i in range(len(arr)-1):
        b=[]
        iteraciones=iteraciones+1
        if arr[i]>arr[i+1]:
            b=arr[i][:]
            arr[i]=arr[i+1][:]
            arr[i+1]=b[:]
            intercambios=intercambios+1
    return iteraciones,intercambios
for i in range(len(arr)-1):
    iteraciones,intercambios=bubbleSort(arr,iteraciones,intercambios)
print(arr)
print(" las iteraciones son %d" % iteraciones)
print(" los intercambios son %d" % intercambios)






