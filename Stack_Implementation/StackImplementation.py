
top=-1
def printstack(li):
    print("The elements in stack are:")
    for i in li:print(str(i)+" ")
def pop(li):
    global top   #here we are saying top is global variable which is already initialized,it is not local variable
    ele=li.pop()
    top=top-1
    return ele

def push(li,ele):
    global top
    top=top+1   #empty list cant be indexed so li[top]=ele wont work li.append() only work
    li.append(ele)
    return li

def main(): 
    size=int(input("Enter a size of Stack: "))
    li=[]
    while(True):
        print("1.Push")
        print("2.PoP")
        print("3.PrintStack")
        print("4.PrintTop")
        print("5.Exit")
        choice=int(input("Enter your choice: "))
        if(choice==1):
            if(top==size-1):
                print("Overflow: stack is full")
                continue
            print("Enter the element to push: ",end="")
            ele=int(input())
            li=push(li,ele)
            print("Element "+str(ele)+" is succesfully pushed to stack.")
        elif(choice==2):
            if(top==-1):
                print("Underflow: stack is empty")
                continue
            ele=pop(li)
            print("Element "+str(ele)+" is popped from the stack.")
        elif(choice==3):
            if(top==-1):
                print("stack is empty")
                continue
            printstack(li)
        elif(choice==4):
            if(top==-1):
                print("stack is empty")
                continue
            print("Top element of stack is "+str(li[top]))
        else:
            print("Exiting program.")
            break

if __name__=="__main__":
    main()
