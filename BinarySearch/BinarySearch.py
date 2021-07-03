def BinarySearch(arr,key):
     i,j=0,len(arr)-1
     while i<=j:
            mid=(i+j)//2
            if(arr[mid]==key):
                return mid
            elif(arr[mid]>key):
                j=mid-1
            else :i=mid+1
     return -1
    
def main():
    print("enter the arr: ")
    arr=[int(i) for i in input().split()]
    print("enter the key: ")
    key=int(input())
    if key!=-1:
        print("key element present at index "+str(BinarySearch(arr,key))+" in array")
    else:
        print("key is not present in array")
if __name__=="__main__":
    main()