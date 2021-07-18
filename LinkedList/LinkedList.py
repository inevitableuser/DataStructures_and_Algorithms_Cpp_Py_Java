class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
        
class LinkedList:
    size=0
    head=None
    p=None
    def insert(self,ele):
        head=self.head
        p=self.p
        if head==None:
            p=Node(ele)
            head=p
        else:
            p.next=Node(ele)
            p=p.next
        self.size+=1
        self.head=head
        self.p=p
        print("The ele ",p.data," is succesfully inserted in list")
        
    def pop(self):
        head=self.head
        p=self.p
        if head==None:
            print("List is Empty")
            return
        elif head.next==None:
            print("The element ",head.data," is successfully popped out")
            self.head=None
            self.p=None
            self.size-=1
            return
        else:
            q=head
            while(q.next!=p):
                q=q.next
            print("The element ",p.data," is successfully popped out")
            q.next=None
            self.p=q
            self.size-=1
        
        
    def printAll(self):
        head=self.head
        q=head
        if(head==None):
            print("List is empty")
            return
        print("The elements in list are")
        while(q!=None):
            print(q.data,end=" ")
            q=q.next
        print()
   

class Main:
    def main():
        LL=LinkedList()
        while True:
            print("1.append   2.pop   3.printList   4.size   5.exit")
            choice=int(input("Enter your choice: "))
            if choice==1:
                ele=int(input("Enter the ele to insert in list: "))
                LL.insert(ele)
            elif choice==2:
                LL.pop()
            elif choice==3:
                LL.printAll()
            elif choice==4:
                print("The size of linkedlist is ",LL.size)
            else:
                print("Exiting program")
                break
    
    if __name__=="__main__":
        main()
