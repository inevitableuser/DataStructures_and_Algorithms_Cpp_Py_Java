#Lists: Ordered, Mutable, allow duplicate elements, allows non generic also

mylist=["banana","cherry","apple"]           #initialising the list
print("printing mylist:",mylist)

mylist_backup=mylist.copy()                 #initialise mylist_backup with mylist(simply copies)

mylist_backup=mylist[:]                     #this is 2nd way of copying (slicing all the way from beg to end)

mylist_backup=list(mylist)                  #this is 3rd way of copying

mylist2=[5,True,"Lion"]                     #list in python is powerful can hold different types
print("printing mylist2: ",mylist2)

item=mylist[1]                              #index access is possible
print("printing item at index 1: ",item)

last_item=mylist[-1]                       #index access from backward
print("printing last item: ",last_item)

print("iterating list: ",end='')              
for i in mylist:                          #similar to for each in java
    print(i,end=' ')
    
if 'apple' in mylist:                   #search and returns boolean value true if hit
    print("apple is present in list at index",mylist.index("apple"))
    
print("The length of list is",len(mylist))                    #getting the size of mylist

mylist.append("lemon")                                        #appending at last similar to push_back() or add()
print("printing mylist after append:",mylist)

mylist.insert(1,"strawberry")                                 #inserting ele at index
print("printing mylist:",mylist)

pop_ele=mylist.pop()                                          #popping last element returns popped element
print("popped element is:",pop_ele)
print("printing mylist after pop:",mylist)

pop_ele=mylist.pop(1)                                        #removing or popping ele based on index returns popped element
print("popped element is:",pop_ele)
print("printing mylist after pop:",mylist) 
                                                            
mylist.remove("cherry")                                     #popping ele based on value (removes first occurence), java has overloaded method remove() which takes index or value
print("printing mylist:",mylist)


del mylist[1]                                               # deletes the item at specified index
print("printing list after deleting apple:",mylist)


mylist.clear()                                              #clears the entire list
print("printing mylist after clear:",mylist)

mylist=mylist_backup                                        #this is not copying this is just pointing

mylist.reverse()                                           #reversing the list and inplace=True
print("printing mylist after reverse:",mylist)
print("printing mylist_backup after reverse:",mylist_backup)             #both will print same output

numlist=list(range(10,0,-1))                               #creating list with range(1,10) in descending order
print("printing numlist after init",numlist)

numlist.sort()                                             #by default sort in ascending order and inplace=true here
print("printing sorted list",numlist)

numlist=numlist[::-1]                                             #reversing the list and assigning to itself
print("printing the numlist after slicing rev: ",numlist)

testlist=[47,15,3,7,2,82,200,23,57]
print("printing testlist:",testlist)

newlist=sorted(testlist)                                         #here inplace=False bcz sorted will return the sorted list but didnt change the inputlist
print("printing new list using sorted",newlist)

revlist=sorted(testlist,reverse=True)                           #reverse=True sort list in descending order
print("printing rev list using sorted",revlist)

print("printing original testlist:",testlist)                   #testlist is same as before no changes to original list

zerolist=[0]*5                                                 #created  list of 5 elements with zero's similar to list<int> li(5,0) in cpp
print("The zerolist is:",zerolist)
print("The count of zero's in zerolist is:",zerolist.count(0))  #counts the no.of elements sames as input argument and returns count

list1=[4,5,6,7]                                               
list2=[8,9,10]
list0=list1+list2                                             #concat two lists with (+) operator
print("Concatenated list:",list0)
print("list1:",list1)
print("list2:",list2)


list1.extend(list2)
print("list1 after extension with list2: ",list1)           #extending list1 with list2 inplace=true

print("sliced list1",list1[1:5])                                                  #slicing from index 1 to 5, excluding 5th index (inplace is false)

print("sliced list1",list1[:3])                                                  #slicing from start to index 3, excluding 3rd index    (inplace is false)

print("sliced list1",list1[2:])                                                 #slicing from index 2 up to last element  (inplace is false)

print("stepping and slicing",list1[::2])                                        #takes every 2 nd item from the starting from start to end


#List Comprehension
mylist=[1,2,3,4,5,6,7,8,9,10] 

sqlist=[i*i for i in mylist]                                                  #creating a list with squares of mylist
print("Printing squares of list",sqlist)

oddlist=[i for i in mylist if i%2!=0]                                         #creating oddlist with only odd ele from mylist
print("oddlist",oddlist)

evenlist=[i if i%2==0 else 0  for i in mylist]                               #creating even list with only even ele and others will be filled with 0's
print("evenlist with zeros",evenlist)  


"""
OUTPUT:

printing mylist: ['banana', 'cherry', 'apple']
printing mylist2:  [5, True, 'Lion']
printing item at index 1:  cherry
printing last item:  apple
iterating list: banana cherry apple apple is present in list at index 2
The length of list is 3
printing mylist after append: ['banana', 'cherry', 'apple', 'lemon']
printing mylist: ['banana', 'strawberry', 'cherry', 'apple', 'lemon']
popped element is: lemon
printing mylist after pop: ['banana', 'strawberry', 'cherry', 'apple']
popped element is: strawberry
printing mylist after pop: ['banana', 'cherry', 'apple']
printing mylist: ['banana', 'apple']
printing list after deleting apple: ['banana']
printing mylist after clear: []
printing mylist after reverse: ['apple', 'cherry', 'banana']
printing mylist_backup after reverse: ['apple', 'cherry', 'banana']
printing numlist after init [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
printing sorted list [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
printing the numlist after slicing rev:  [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
printing testlist: [47, 15, 3, 7, 2, 82, 200, 23, 57]
printing new list using sorted [2, 3, 7, 15, 23, 47, 57, 82, 200]
printing rev list using sorted [200, 82, 57, 47, 23, 15, 7, 3, 2]
printing original testlist: [47, 15, 3, 7, 2, 82, 200, 23, 57]
The zerolist is: [0, 0, 0, 0, 0]
The count of zero's in zerolist is: 5
Concatenated list: [4, 5, 6, 7, 8, 9, 10]
list1: [4, 5, 6, 7]
list2: [8, 9, 10]
list1 after extension with list2:  [4, 5, 6, 7, 8, 9, 10]
sliced list1 [5, 6, 7, 8]
sliced list1 [4, 5, 6]
sliced list1 [6, 7, 8, 9, 10]
stepping and slicing [4, 6, 8, 10]
Printing squares of list [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]
oddlist [1, 3, 5, 7, 9]
evenlist with zeros [0, 2, 0, 4, 0, 6, 0, 8, 0, 10]

"""
