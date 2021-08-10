
class MergeSort:
    
    Arr=[]
    def __init__(self,arr):
        self.Arr=arr
        
    def merge(self,start,mid,end):
        Arr=self.Arr
        left=Arr[start:mid+1]
        right=Arr[mid+1:end+1]
        x,y=0,0
        for i in range(start,end+1):
            if left[x]<right[y]:
                Arr[i]=left[x]
                x+=1
            else:
                Arr[i]=right[y]
                y+=1
            if x==len(left):
                while y<len(right):
                    i+=1
                    Arr[i]=right[y]
                    y+=1
                break
            elif y==len(right):
                while x<len(left):
                    i+=1
                    Arr[i]=left[x]
                    x+=1
                break
        self.Arr=Arr
                
    def merge_sort(self,start,end):
        if start==end:
            return
        mid=(start+end)//2
        self.merge_sort(start,mid)
        self.merge_sort(mid+1,end)
        self.merge(start,mid,end)
    
    def print(self):
        print("List after merge sorting: ",end='')
        for i in self.Arr:print(i,end=" ")
        print()

class Main:
    def main():
        print("Enter the list to sort: ",end='')
        li=[int(i) for i in input().split(" ")]
        msort=MergeSort(li)
        msort.merge_sort(0,len(li)-1)
        msort.print()
        
    if __name__=="__main__":
        main()
        

        
"""
OUTPUT:

Enter the list to sort: 69 78 45 23 89 1 56 99 34 7
List after merge sorting: 1 7 23 34 45 56 69 78 89 99 

"""
