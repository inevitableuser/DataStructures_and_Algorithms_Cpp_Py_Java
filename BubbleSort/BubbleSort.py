class BubbleSort:
    def swap(self,arr,i,j):
        temp=arr[i]
        arr[i]=arr[j]
        arr[j]=temp
        return arr
    def bubblesort(self,arr):
        n=len(arr)
        for i in range(n-1):
            p=0
            for j in range(1,n-i):
                print(p,j)
                if arr[p]>arr[j]:
                    arr=self.swap(arr,p,j)
                p+=1
            print(arr)

class Main:
    def main():
        arr=[int(i) for i in input().split()]
        bubbleObj=BubbleSort()
        bubbleObj.bubblesort(arr)

    if __name__=="__main__":
         main()
