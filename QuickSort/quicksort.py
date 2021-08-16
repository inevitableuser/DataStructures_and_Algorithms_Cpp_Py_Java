



class QuickSort:
    Arr=[]
    def __init__(self,Arr):
        self.Arr=Arr
        
    def swap(self,i,j):
        Arr=self.Arr
        temp=Arr[i]
        Arr[i]=Arr[j]
        Arr[j]=temp
        self.Arr=Arr
        
    def partition(self,start,end):
        Arr=self.Arr
        pivot=Arr[end]
        i=start-1
        for j in range(start,end):
            if Arr[j] < pivot:
                i+=1
                self.swap(i,j)
        self.swap(i+1,end)
        return i+1
    
    def quicksort(self,start,end):
        if start<end :
            q=self.partition(start,end)
            self.quicksort(start,q-1)
            self.quicksort(q+1,end)
    
    def printArr(self):
        print('printing Arr after quick sort: ',end='')
        for i in self.Arr:print(i,end=' ')
        print()
    
class Main:
    def main():
        print("Enter the list to sort: ",end='')
        Arr=[int(i) for i in input().split()]
        qsort=QuickSort(Arr)
        qsort.quicksort(0,len(Arr)-1)
        qsort.printArr()
        
    if __name__=="__main__":
        main()
        
        
