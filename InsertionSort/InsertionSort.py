class InsertionSort:
    def insertionSort(self,arr):
         for i in range(1,len(arr)):
             cur=arr[i]
             for j in range(i,0,-1):
                  if cur<arr[j-1]:
                      arr[j]=arr[j-1]
                  else:
                    break
             arr[j-1]=cur
         return arr
                    
    def printArr(self,arr):
        print("aray after sorted: ",end="")
        for i in arr:
            print(str(i)+" ",end="")
            
class Main:
    def main():
        arr=[int(i) for i in input("Enter the array: ").split(" ")]
        sort=InsertionSort()
        arr=sort.insertionSort(arr)
        sort.printArr(arr)
        
        
    if __name__=="__main__":
        main()
