import random
N=10
def heapSort(a): 
    def sift(start, count):  
        root = start  
        while root*2+1 < count:  
            child = int(root*2+1)  
            if child < count-1 and a[child] < a[child+1]:  
                child += 1  
            if a[root] < a[child]:  
                a[root],a[child] = a[child],a[root]  
                root=child  
            else:  
                return

    count = len(a)  
    start = int(count/2) - 1  
    end = count - 1 

    while start >= 0:  
        sift(start, count)  
        start -= 1  

    while end > 0:  
        a[end], a[0] = a[0], a[end]  
        sift(0, end)  
        end -= 1
a=[]
for i in range(N):
    v=random.randrange(0,N-1,1)
    a.append(v)
  
print(a)
heapSort(a)  
print(a)


