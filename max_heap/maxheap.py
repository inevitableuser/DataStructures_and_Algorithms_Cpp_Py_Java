class MaxHeap:
    heap=[]
    def __init__(self):
        pass
    
    def peek(self):
        pass
    
    def offer(self,ele):
        
    
    def poll(self):
        pass
    
    def printheap(self):
        pass
    
    def sort(self):
        pass



class Main:
    def main():
        mheap=MaxHeap()
        while True:
            print("1.offer   2.Poll   3.peek   4.print   5.sort   6.exit")
            choice=int(input("Enter your choice: "))
            if choice==1:
                ele=int(input("Enter the ele: "))
                mheap.offer()
            elif choice==2:
                mheap.poll()
            elif choice==3:
                mheap.peek()
            elif choice==4:
                mheap.printheap()
            elif choice==5:
                mheap.sort()
            else:
                break
                
        
    if __name__=="__main__":
        main()
