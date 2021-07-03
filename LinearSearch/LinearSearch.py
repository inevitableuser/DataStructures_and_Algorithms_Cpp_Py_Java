def LinearSearch(arr,key):
     for i in arr:
        if i==key:
           return arr.index(i)
     return -1
    
def main():
    print("enter the arr: ")
    arr=[int(i) for i in input().split()]
    print("enter the key: ")
    key=int(input())
    if key!=-1:
        print("key element present at index "+str(LinearSearch(arr,key))+" in array")
    else:
        print("key is not present in array")
if __name__=="__main__":
    main()