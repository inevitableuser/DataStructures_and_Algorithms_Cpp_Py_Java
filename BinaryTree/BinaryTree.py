class Node:
    def __init__(self,ele):
        self.lchild=None
        self.data=ele
        self.rchild=None
        
class BinaryTree:
    head=None
    p=None
    def getaddr(self,q,leaf):
        if q==None:
            return
        if q.data==leaf:
            self.p=q
        self.getaddr(q.lchild,leaf)
        self.getaddr(q.rchild,leaf)
        
    def append(self,ele):
        if self.head==None:
            self.head=Node(ele)
        else:
            print("To which leaf you want to append: ",end='')
            leaf=int(input())
            print("To which direction you want to append: ",end='')
            dirr=input()[0]
            q=self.head
            self.getaddr(q,leaf)
            if dirr=='l':
                self.p.lchild=Node(ele)
            else:
                self.p.rchild=Node(ele)
    
    def replace(self,ele):
        print("To which node you want to replace data: ",end='')
        node=int(input())
        q=self.head
        self.getaddr(q,node)
        self.p.data=ele
        
                
    def  preorder(self,q):
        if q==None:
            return
        print(str(q.data)+" ",end='')
        self.preorder(q.lchild)
        self.preorder(q.rchild)
    
    def  Inorder(self,q):
        if q==None:
            return
        self.Inorder(q.lchild)
        print(str(q.data)+" ",end='')
        self.Inorder(q.rchild)
        
    def  postorder(self,q):
        if q==None:
            return
        self.postorder(q.lchild)
        self.postorder(q.rchild)
        print(str(q.data)+" ",end='')
              
        
        
class Main:
    def main():
        bt=BinaryTree()
        while True:
            print("1.Append   2.preorder   3.Inorder   4.postorder   5.Replace   6.Exit")
            print("Enter your choice: ",end='')
            choice=int(input())
            if choice==1:
                print("Enter the ele to append: ",end='')
                ele=int(input())
                bt.append(ele)
            elif choice==2:
                bt.preorder(bt.head)
                print()
            elif choice==3:
                bt.Inorder(bt.head)
                print()
            elif choice==4:
                bt.postorder(bt.head)
                print()
            elif choice==5:
                print("Enter the new data you want to put: ",end='')
                ele=int(input())
                bt.replace(ele)
            else:
                print("Exiting Program")
                break
                
    if __name__=="__main__":
        main()
    
