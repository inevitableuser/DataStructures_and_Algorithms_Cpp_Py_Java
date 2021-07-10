
class Queue:
    Q=[]
    def enque(self,ele):
        self.Q.append(ele)
    def deque(self):
        if(len(self.Q)>0):
            ele=self.Q[0]
            self.Q=self.Q[1:]
            return ele
        return -1
    def printall(self):
        if(len(self.Q)>0):
            print("The elements in Queue are: ",end=" ")
            for i in self.Q:
                print(i,end=" ")
            print()
        else:
            print("Queue is empty")
    def printFront(self):
        if(len(self.Q)>0):
            print("The Front of the Queue is",self.Q[0])
        else:
            print("Queue is Empty")
    def printRear(self):
        if(len(self.Q)>0):
            print("The Rear of the Queue is",self.Q[-1])
        else:
            print("Queue is Empty")
    
class Main:
   def main():
        qObj=Queue()
        while(True):
            print("1.enqueue   2.dequeue   3.PrintQueue   4.printFront   5.printRear   6.Exit")
            choice=int(input("enter your choice: "))
            if choice==1:
                ele=input("enter the element: ")
                qObj.enque(ele)
                print("The element",ele,"is successfully inserted")
            elif choice==2:
                ele=qObj.deque()
                if ele!=-1:
                    print("The element",ele,"is successfully deleted")
                    continue
                print("The Queue is Empty")
            elif choice==3:
                qObj.printall()
            elif choice==4:
                qObj.printFront()
            elif choice==5:
                qObj.printRear()
            else:
                print("Exiting Program")
                break
   if __name__=="__main__":
         main()
    
    
