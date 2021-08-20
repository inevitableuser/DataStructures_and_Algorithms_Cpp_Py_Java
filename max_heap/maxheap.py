import math

class MaxHeap:
    heap=[]
    def __init__(self):
        pass
    
    def peek(self):
        print("The peek of the max heap is ",self.heap[0])

    def swap(self,i,j):
        heap=self.heap
        temp=heap[i]
        heap[i]=heap[j]
        heap[j]=temp
        self.heap=heap

    def up_heapify(self,child):
        if child==0:
            return
        parent=math.ceil(child/2)-1
        if self.heap[child] > self.heap[parent]:
            self.swap(child,parent)
            child=parent
            self.up_heapify(child)
    
    def offer(self,ele):
        self.heap.append(ele)
        self.up_heapify(len(self.heap)-1)

    def down_heapify(self,parent,size):

        lchild=parent*2+1
        rchild=parent*2+2
        larg=parent
        if lchild < size and self.heap[lchild] > self.heap[larg]:
            larg=lchild
        if rchild < size and self.heap[rchild] > self.heap[larg]:
            larg=rchild
        if larg!=parent:
            self.swap(parent,larg)
            self.down_heapify(larg,size)

    
    def poll(self):
        self.swap(0,len(self.heap)-1)
        print("The popped ele is",self.heap[-1])
        self.heap.pop()
        self.down_heapify(0,len(self.heap))
        
    
    def printheap(self):
        print("printing maxheap: ",end='')
        for i in self.heap:
            print(i,end=' ')
        print()
    
    def rebuild(self):
        size=len(self.heap)
        l=size-1
        p=math.ceil(l/2)-1
        for i in range(p,-1,-1):
            self.down_heapify(i,size)
    
    def sort(self):
        l=len(self.heap)-1
        for i in range(l,0,-1):
            self.swap(0,i)
            self.down_heapify(0,i)
        self.printheap()
        print("Rebuilding sorted heap to maxheap...")
        self.rebuild()

class Main:
    def main():
        mheap=MaxHeap()
        while True:
            print("1.offer   2.Poll   3.peek   4.print   5.sort   6.exit")
            choice=int(input("Enter your choice: "))
            if choice==1:
                ele=int(input("Enter the ele: "))
                mheap.offer(ele)
            elif choice==2:
                if len(mheap.heap)!=0:
                       mheap.poll()
                else:
                    print("UnderFlow maxheap is empty")
            elif choice==3:
                if len(mheap.heap)!=0:
                       mheap.peek()
                else:
                    print("maxheap is empty")
            elif choice==4:
                if len(mheap.heap)!=0:
                       mheap.printheap()
                else:
                    print("maxheap is empty")
            elif choice==5:
                if len(mheap.heap)!=0:
                       mheap.sort()
                else:
                    print("maxheap is empty")
            else:
                break
                
        
    if __name__=="__main__":
        main()




# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 1
# Enter the ele: 1
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 1
# Enter the ele: 2
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 1
# Enter the ele: 3
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 1
# Enter the ele: 4
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 1
# Enter the ele: 5
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 1
# Enter the ele: 6
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 1
# Enter the ele: 7
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 1
# Enter the ele: 8
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 1
# Enter the ele: 9
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 1
# Enter the ele: 10
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 3
# The peek of the max heap is  10
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 4
# printing maxheap: 10 9 6 7 8 2 5 1 4 3 
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 5
# printing maxheap: 1 2 3 4 5 6 7 8 9 10 
# Rebuilding sorted heap to maxheap...
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 4
# printing maxheap: 10 9 7 8 5 6 3 1 4 2 
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 2
# The popped ele is 10
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 2
# The popped ele is 9
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 2
# The popped ele is 8
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 2
# The popped ele is 7
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 2
# The popped ele is 6
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 2
# The popped ele is 5
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 2
# The popped ele is 4
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 2
# The popped ele is 3
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 2
# The popped ele is 2
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 2
# The popped ele is 1
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 2
# UnderFlow maxheap is empty
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 3
# maxheap is empty
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 4
# maxheap is empty
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 5
# maxheap is empty
# 1.offer   2.Poll   3.peek   4.print   5.sort   6.exit
# Enter your choice: 6