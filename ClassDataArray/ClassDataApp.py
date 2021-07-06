class Person:
    def __init__(self,firstname,lastname,age):
        self.firstname=firstname
        self.lastname=lastname
        self.age=age
    
class ClassDataArray:
    person_list=[]
    
    def insert(self,personObj):
        self.person_list.append(personObj)
        return "sucessfully inserted"
    
    def find(self,firstname):
        if len(self.person_list)==0:
            return "list is empty"
        for i in self.person_list:
            if i.firstname==firstname:
                return i.firstname+" "+i.lastname+" "+str(i.age)
        return "person not found"
    
    def delete(self,firstname):
        if len(self.person_list)==0:
            return "list is empty"
        plist=self.person_list
        for i in range(len(plist)):
            if plist[i].firstname==firstname:
                plist.pop(i)
                self.person_list=plist
                return "succesfully deleted"
        return "person not found"
    
    def displayAll(self):
        if len(self.person_list)==0:
            return "list is empty"
        for i in self.person_list:
            print(i.firstname+" "+i.lastname+" "+str(i.age))
        return "sucessfully printed entire list"
class ClassDataApp:
    def main():
        arr=ClassDataArray()
        while(True):
            print("1.insert  2.delete  3.printall  4.find  5.exit")
            choice=int(input("enter your choice: "))
            if(choice==1):
                pobj=Person(input("enter firstname: "),input("enter Lastname: "),int(input("enter age: ")))
                print(arr.insert(pobj))
            elif(choice==2):
                print(arr.delete(input("enter firstname to delete: ")))
            elif(choice==3):
                print(arr.displayAll())
            elif(choice==4):
                print(arr.find(input("enter firstname to find: ")))
            else:
                break   
    if __name__=="__main__":
        main()
