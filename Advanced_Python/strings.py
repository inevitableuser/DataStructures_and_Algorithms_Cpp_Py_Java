# strings: ordered, immutable, text representation

my_string='hello world'
print(my_string)


my_string='I\'m a programmer'
print(my_string)


my_string="I'm a programmer"
print(my_string)


my_string="""I'm a 
programmer"""                     # here \n is considered and prints in two lines
print(my_string)


my_string="""I'm a \
programmer"""                 # \ wont consider \n and takes in single line
print(my_string)



my_string='hello world'
char=my_string[0]
print(char)

char=my_string[-1]            # last character
print(char)



# my_string[0]='v'           gives error because strings wont support item assignment


substring=my_string[1:5]        #index 5 excluded
print(substring)


substring = my_string[1:]        # slices all the way from 1 to last
print(substring)

substring=my_string[:5]          # slices all the way form start to 5
print(substring)


substring=my_string[::1]           # same as printing my_string
print(substring,'=',my_string)


substring=my_string[::2]           # jumping 1 index every time
print(substring,my_string)


substring=my_string[::-1]         # reverse the string with slicing
print(substring)


greeting='hello'
name='mike'
sentence=greeting+" "+name                 # concatenating two strings
print(sentence)

for i in greeting:                        # iterate through string
    print(i*5)


if 'e' in greeting:                      # search char in string and returns bool
    print('yes')
else: print('no')


my_string='     hello world     '
print(my_string)
my_string=my_string.strip()                     # removes the extra spaces front and back
print(my_string)



my_string='hello world'
if my_string.startswith('he'):
    if my_string.endswith('ld'):
        if my_string.lower()=='hello world':
               my_string=my_string.upper()
print(my_string)



print(my_string.find('O'))           # gives the first occurence of the element or substring if found, else return -1


print(my_string.count('L'))


my_string=my_string.replace('L','MARS')       # replaces every occurence of the char or substring  (inplace=FALSE)
print(my_string)



my_string='how are you doing'
my_list=my_string.split()              # default arg is space to split function
print(my_list)



new_string=' '.join(my_list)           # joins all the elements in list with a space in between
print(new_string) 


my_list=['a']*6                       # join is very fast than concatenating a string in a loop
print(my_list)
print(''.join(my_list))



var = 'Tom'
my_string='the variable is %s' %var
print(my_string)

var = 3
my_string='the variable is %d' %var
print(my_string)


var = 2.5674
my_string='the variable is %f' %var
print(my_string)
my_string='the variable is %.2f' %var
print(my_string)


var = 2.5674
var2 = 6
my_string='the variable is {var:.3f} and {var2}'.format(var=var,var2=var2)
print(my_string)
my_string='the variable is {:.2f} and {}'.format(var,var2)
print(my_string)


var = 3.7456
var2 = 16
my_string=f'the variable is {var:.2f} and {var2*2}'              # fstrings are hightly recommondable similar to string interpolation in c#
print(my_string)




# OUTPUT:

# hello world
# I'm a programmer
# I'm a programmer
# I'm a 
# programmer
# I'm a programmer
# h
# d
# ello
# ello world
# hello
# hello world = hello world
# hlowrd hello world
# dlrow olleh
# hello mike
# hhhhh
# eeeee
# lllll
# lllll
# ooooo
# yes
#      hello world     
# hello world
# HELLO WORLD
# 4
# 3
# HEMARSMARSO WORMARSD
# ['how', 'are', 'you', 'doing']
# how are you doing
# ['a', 'a', 'a', 'a', 'a', 'a']
# aaaaaa
# the variable is Tom
# the variable is 3
# the variable is 2.567400
# the variable is 2.57
# the variable is 2.567 and 6
# the variable is 2.57 and 6
# the variable is 3.75 and 32