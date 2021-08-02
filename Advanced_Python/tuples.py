#Tuples : ordered, immutable, allows duplicate elements
#when working with large data, working with tuples are more efficient than lists with both TC and SC

mytuple=("this is string")
print(type(mytuple))

mytuple=("this is tuple",)                    #  (,) is imp for tuple
print(type(mytuple))

mytuple=("harshad",29,"mumbai")
print(mytuple)

mytuple=tuple([10,30,50])                  #tuple can take iterator and converts to tuple
print(type(mytuple),mytuple)

item=mytuple[0]
print("Element at first index",item)

item=mytuple[-1]
print("Element at last index",item)

print("Squares of tuple",mytuple,"are :",end='')
for i in mytuple:
    print(i*i,end=' ')
print()


if 10 in mytuple:
    print("10 present in mytuple")
    
    
mytuple=('a','p','p','l','e')
print("length of mytuple is",len(mytuple))


print("count of p in",mytuple,"is",mytuple.count('p'))
    

print("first occurence of p is at index",mytuple.index('p'))                    # returns first occurence


mylist=list(mytuple)                                                          # convert tuple to list

  
mytuple=tuple(mylist)                                                       #convert list to tuple 


mytuple=(1,2,3,4,5,6,7,8,9,10)

b=mytuple[2:5]                                                          #slice of a tuple is tuple
print(b)


mytuple=("harshad",29,"mumbai")
name,age,city=mytuple                                                   # unpacking the tuple
print("Name is {0} \nAge is {1}\ncity is {2}".format(name,age,city))


mytuple=(1,2,3,4,5,6,7,8,9,10)                       
i1,*i2,i3=mytuple
print("i1 contains",i1)                                            # i1 contains first item
print("i2 contains",i2)                                            # i2 contains a list of remaining items
print("i3 contains",i3)                                            # i3 contains last item



"""
OUTPUT:

<class 'str'>
<class 'tuple'>
('harshad', 29, 'mumbai')
<class 'tuple'> (10, 30, 50)
Element at first index 10
Element at last index 50
Squares of tuple (10, 30, 50) are :100 900 2500 
10 present in mytuple
length of mytuple is 5
count of p in ('a', 'p', 'p', 'l', 'e') is 2
first occurence of p is at index 1
(3, 4, 5)
Name is harshad 
Age is 29
city is mumbai
i1 contains 1
i2 contains [2, 3, 4, 5, 6, 7, 8, 9]
i3 contains 10
"""
