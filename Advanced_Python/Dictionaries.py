# Dictionaries: key-value pairs, Unordered, Mutable
mydict={"name":"Harshad","age":29,"city":"Mumbai"}          # here we need to give keys as strings or int but not undeclared variables while init
print("printing mydict:",mydict)


mydict2= dict(name="bagath",age=20,city="Delhi")            # using constructor we dont need to use quotes bcz they are arguments
print("printing mydict2:",mydict2)


value=mydict["name"]                                        # accessing the value by indexing using key 
print("printing value of key(name) in mydict:",value)       # key error will be raised if key is not present while indexing


mydict["email"]="harshadmehta@gmail.com"               # inserting new key-value in existing dictionary
print("printing mydict:",mydict)                                             


mydict["email"]="harshadmehta1992@gmail.com"          # if key already exists then value is overwritten
print("printing mydict:",mydict)


del mydict["age"]                                     # deletes the item from dictionary based on key
print("deleted age from mydict:",mydict)

mydict.pop("email")                                    # pops the item from dictionary based on key
print("popped email from mydict:",mydict)

mydict.popitem()                                     # pops the last item from dictionary similar to pop() in list
print("popped lastitem from mydict:",mydict)

mydict={"name":"Harshad","age":29,"city":"Mumbai"}
print("printing mydict:",mydict)

mykeys=list(mydict.keys())                                # gives list of keys
myvalues=list(mydict.values())                            # gives list of values
myitems=list(mydict.items())                              # gives list of items, each item as tuple


print("keys list in mydict:",mykeys)

print("values list in mydict:",myvalues)

print("items list in mydict:",myitems)


if "name" in mydict:
    print("The value for 'name' key in mydict:",mydict["name"])

    
print("printing keys: ",end="")
for key in mydict:
    print(key,end=' ')
print()
    
    
print("printing keys: ",end="")
for key in mydict.keys():
    print(key,end=' ')
print()


print("printing values: ",end="")
for value in mydict.values():
    print(value,end=' ')
print()


print("printing key-value pairs: ")
for key,value in mydict.items():
    print('\t\t\t',key,value)
    

mydict_copy=dict(mydict)                                     # .copy() or dict() can be used to copy dict , whereas in in list we can also 
print(mydict_copy)                                           # have third method of copying that is slicing [::1] 


mydict_copy=mydict.copy()                                   # if we directly assign using = operator without copy() or dict() 
print(mydict_copy)                                          # then it acts as a pointer to original one, not as seperate copy



mydict2= dict(name="bagath",age=20,email="bagathsingh@gmail.com")   
print("printing mydict2:",mydict2)
mydict.update(mydict2)                                            # updating mydict with mydict2 will update mydict 
print("mydict after updating:",mydict)                            # overrides values with common keys, and adds the new items and leaves the uncommon old items


mydict={2:4,3:9,4:16}                                            # keys can be strings or int or any is allowed
print("printing mydict:",mydict)


# all immutable items can be used as keys Eg: tuple

mytuple=(4,6)
mydict={mytuple:24}                                            # tuples can be acted as keys but lists can't bcz lists are mutable
print("printing mydict:",mydict)



"""
OUTPUT:

printing mydict: {'name': 'Harshad', 'age': 29, 'city': 'Mumbai'}
printing mydict2: {'name': 'bagath', 'age': 20, 'city': 'Delhi'}
printing value of key(name) in mydict: Harshad
printing mydict: {'name': 'Harshad', 'age': 29, 'city': 'Mumbai', 'email': 'harshadmehta@gmail.com'}
printing mydict: {'name': 'Harshad', 'age': 29, 'city': 'Mumbai', 'email': 'harshadmehta1992@gmail.com'}
deleted age from mydict: {'name': 'Harshad', 'city': 'Mumbai', 'email': 'harshadmehta1992@gmail.com'}
popped email from mydict: {'name': 'Harshad', 'city': 'Mumbai'}
popped lastitem from mydict: {'name': 'Harshad'}
printing mydict: {'name': 'Harshad', 'age': 29, 'city': 'Mumbai'}
keys list in mydict: ['name', 'age', 'city']
values list in mydict: ['Harshad', 29, 'Mumbai']
items list in mydict: [('name', 'Harshad'), ('age', 29), ('city', 'Mumbai')]
The value for 'name' key in mydict: Harshad
printing keys: name age city 
printing keys: name age city 
printing values: Harshad 29 Mumbai 
printing key-value pairs: 
			 name Harshad
			 age 29
			 city Mumbai
{'name': 'Harshad', 'age': 29, 'city': 'Mumbai'}
{'name': 'Harshad', 'age': 29, 'city': 'Mumbai'}
printing mydict2: {'name': 'bagath', 'age': 20, 'email': 'bagathsingh@gmail.com'}
mydict after updating: {'name': 'bagath', 'age': 20, 'city': 'Mumbai', 'email': 'bagathsingh@gmail.com'}
printing mydict: {2: 4, 3: 9, 4: 16}
printing mydict: {(4, 6): 24}

"""
