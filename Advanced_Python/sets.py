# Sets : unordered, unique(no duplicates) , mutable 

myset={5,1,2,3,1,2}                       # gives all unique integers but unordered
print(myset) 

myset=set("hello")                       # gives all unique chars but unordered
print(myset)

myset=set([6,7,1,2,3,1,2])              # gives all unique integers but unordered
print(myset)

myset.clear()                           # clears the set or discard all items
print(myset)

myset={}                               # interpreter will thought this as dict
print(type(myset))

myset=set()                           # init the empty set like this
print(type(myset))

myset.add(1)                         # add method to add element in set
myset.add(2) 
myset.add(3)
print("printing myset",myset)  


myset.remove(2)                  # removes the ele 2 if found, else raise exception
print("printing myset",myset)

myset.discard(4)                # removes the ele 4 if found, else do nothing
print("printing myset",myset)


print("popping",myset.pop(),"from myset")       # pops the random item from set
print("printing myset:",myset)


myset.add(4) 
myset.add(5)
myset.add(6)


print("iterating myset: ",end=" ")             # iterating through set
for i in myset:print(i,end=" ")
print()

  
if 4 in myset:                                # search in set
    print("4 exist")
else:
   print("4 doesn't exist")
  
mysetcopy = myset.copy()                    # copies myset into mysetcopy, we can also use [mysetcopy = set(myset)], since indexing is not possible
print('printing myset',myset)                                                             # we can't use the third method of copying.
print('printing mysetcopy',mysetcopy)

odds={1,3,5,7,9}
evens={0,2,4,6,8}
primes={2,3,5,7}

union=odds.union(evens)                               # combine two sets with out duplicates
print('union of odd and even: ',union)

intersection=odds.intersection(evens)
print('intersection of odd and even: ',intersection)     # intersection of two sets with out duplicates


prime_even_inter=evens.intersection(primes)            
print('intersection of even and prime: ',prime_even_inter)


setA={1,2,3,4,5,6,7,8,9}
setB={1,2,3,10,11,12}

A_diff_B=setA.difference(setB)
print('the difference of sets A and B is (A-B):',A_diff_B)


B_diff_A=setB.difference(setA)
print('the difference of sets B and A is (B-A):',B_diff_A)


sym_diff=setA.symmetric_difference(setB)                                 # symetric difference will (A union B)-(A inter B)
print('the symetric_differece of A and B is:',sym_diff)        


setA.update(setB)                  # inplace union (combines setA and setB and remove duplicates and place result in setA only)
print('the setA after inplace union:',setA)


setA={1,2,3,4,5,6,7,8,9}
setB={1,2,3,10,11,12}


setA.intersection_update(setB)     # inplace intersection (intersects setA and setB and remove duplicates and place result in setA only)
print('the setA after inplace intersection:',setA)

setA={1,2,3,4,5,6,7,8,9}
setB={1,2,3,10,11,12}

setA.difference_update(setB)      # inplace difference
print('the setA after inplace difference:',setA)

setA={1,2,3,4,5,6,7,8,9}
setB={1,2,3,10,11,12}
setA.symmetric_difference_update(setB)
print('the setA after inplace sym_diff:',setA)


setA={1,2,3,4,5,6}
setB={1,2,3}

print('setA is subset of setB:',setA.issubset(setB))                 # is all elements of setA is present in setB : FALSE
print('setB is subset of setA:',setB.issubset(setA))

print('setA is superset of setB:',setA.issuperset(setB))            # is all elements of setB is present in setA : TRUE
print('setB is superset of setA:',setB.issuperset(setA))


setC={10,11,12}

print('is setA and setB are disjoint sets:',setA.isdisjoint(setB))      # is there is null intersection between setA and setB : False
print('is setA and setC are disjoint sets:',setA.isdisjoint(setC))      # is there is null intersection between setA and setC : True


fset=frozenset([1,2,3,4])           # frozen set is a immutable set where we cannot update once init
print('this is frozen set:',fset)   # all set methods will work except add,remove,discard,update and all inplace methods won't work



"""
OUTPUT:

{1, 2, 3, 5}
{'o', 'e', 'l', 'h'}
{1, 2, 3, 6, 7}
set()
<class 'dict'>
<class 'set'>
printing myset {1, 2, 3}
printing myset {1, 3}
printing myset {1, 3}
popping 1 from myset
printing myset: {3}
iterating myset:  3 4 5 6 
4 exist
printing myset {3, 4, 5, 6}
printing mysetcopy {3, 4, 5, 6}
union of odd and even:  {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
intersection of odd and even:  set()
intersection of even and prime:  {2}
the difference of sets A and B is (A-B): {4, 5, 6, 7, 8, 9}
the difference of sets B and A is (B-A): {10, 11, 12}
the symetric_differece of A and B is: {4, 5, 6, 7, 8, 9, 10, 11, 12}
the setA after inplace union: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}
the setA after inplace intersection: {1, 2, 3}
the setA after inplace difference: {4, 5, 6, 7, 8, 9}
the setA after inplace sym_diff: {4, 5, 6, 7, 8, 9, 10, 11, 12}
setA is subset of setB: False
setB is subset of setA: True
setA is superset of setB: True
setB is superset of setA: False
is setA and setB are disjoint sets: False
is setA and setC are disjoint sets: True
this is frozen set: frozenset({1, 2, 3, 4})

"""
