from collections import Counter,namedtuple,OrderedDict,defaultdict,deque

st='bbbccaaaa'
my_count=Counter(st)                  # returns a dict contains all unique keys and its count as value 
print(my_count)

print(my_count.keys())                # gets the keys

print(my_count.values())              # gets the values

print(my_count.most_common(1))       # top 1 most common item and its count as tuple(key,count) 
                                     # if 2 is passed as arg, then top 2 results will be returned

print(list(my_count.elements()))     # list of all the characters in the string



# named tuple is simple light weight obj type similar to struct
# the only advantage is we can access  value through name.key or name[index] 

Point=namedtuple('Point','x y')      # space or , between the keys are valid

pt=Point(1.0,2.4)

print('accesing through .key',pt.x,pt.y)

print('accesing through indexing',pt[0],pt[1])


Employee=namedtuple('Employee','name,age,salary')
emp1=Employee('Vivek',26,450000)
print('accesing through keys',emp1.name,emp1.age,emp1.salary)
print('accesing through indexing',emp1[0],emp1[1],emp1[2])



# ordered Dict remembers the order of insertion
# since python 3.7 the normal dict also remembering the order of insertion

od=OrderedDict()
od['b']=2
od['c']=3
od['d']=4
od['a']=1
print(od)


od={}    
od['b']=2
od['c']=3
od['d']=4
od['a']=1
print('normal dict',od)


# default dict is similar to normal dict
# the only difference is default dict will return default value if queried key is not present in dict
# where as normal dict will raise an error


dd=defaultdict(int)

dd['a']=1
dd['b']=2
print(dd['c'])             # wont raise error, gives def val 0 for int , 0.0 for float, [] for list
print(dd['a'])
print(dd['b'])


# deque is a double ended queue which is easy for implementing queue
# because insertion and deletion can be done from both the ends

d=deque()
  
d.append(1)                                # similar to push_back in c++ and offer in java

print(d)

d.append(2)                                

print(d)

d.appendleft(3)                              # similar to push_front in c++ and offerfirst in java

print(d)

d.popleft()                                  # similar to pop_front in c++ and pollfirst in java

print(d)

d.pop()                                      # similar to pop_back in c++ and polllast in java

print(d)


# d.clear()              clears all the ele from the deque

d.extend([4,5,6])

print(d)

d.extendleft([7,8,9])           # similar to appendleft with iteration 7 will append,
                                #  8 will append , and 9 will append so 9 will be on top


print(d)


d.rotate(1)              # all ele will rotate index+1 -->

print('printing deque after rotate -->',d)

d.rotate(-1)            # all ele will rotate index-1 <--

print('printing deque after rotate <--',d)





# OUTPUT:

# Counter({'a': 4, 'b': 3, 'c': 2})
# dict_keys(['b', 'c', 'a'])
# dict_values([3, 2, 4])
# [('a', 4)]
# ['b', 'b', 'b', 'c', 'c', 'a', 'a', 'a', 'a']
# accesing through .key 1.0 2.4
# accesing through indexing 1.0 2.4
# accesing through keys Vivek 26 450000
# accesing through indexing Vivek 26 450000
# OrderedDict([('b', 2), ('c', 3), ('d', 4), ('a', 1)])
# normal dict {'b': 2, 'c': 3, 'd': 4, 'a': 1}
# 0
# 1
# 2
# deque([1])
# deque([1, 2])
# deque([3, 1, 2])
# deque([1, 2])
# deque([1])
# deque([1, 4, 5, 6])
# deque([9, 8, 7, 1, 4, 5, 6])
# printing deque after rotate --> deque([6, 9, 8, 7, 1, 4, 5])
# printing deque after rotate <-- deque([9, 8, 7, 1, 4, 5, 6])