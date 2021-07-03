def swap(arr,a,b):
    temp=arr[a]
    arr[a]=arr[b]
    arr[b]=temp
    return arr
def selectionSort(arr):
    for i in range(len(arr)):
        curmin=arr[i]
        minindex=i
        for j in range(i+1,len(arr)):
            if(curmin>arr[j]):
                curmin=arr[j]
                minindex=j
        if minindex!=i:
            arr=swap(arr,i,minindex)
    return arr

def main():
    print("Enter the array to sort: ",end="")
    arr=[int(i) for i in input().split()]
    arr=[str(i) for i in selectionSort(arr)]
    print("Array after selection sorting: ",end="")
    print(" ".join(arr))
if __name__=="__main__":
    main()