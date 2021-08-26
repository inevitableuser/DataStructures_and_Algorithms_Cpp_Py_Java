import heapq         # heapq default works as minheap, so if you need maxheap multiply all with -1 and build heap
                     # all methods are inplace=TRUE
Arr=[]

heapq.heappush(Arr,20)

heapq.heappush(Arr,14)

heapq.heappush(Arr,5)

heapq.heappush(Arr,15)

heapq.heappush(Arr,10)

heapq.heappush(Arr,2)

print('printing array',Arr)

print('the popped ele is:',heapq.heappop(Arr))

print('printing array',Arr)

print('the popped ele is:',heapq.heappop(Arr))

print('printing array',Arr)

print('the pushed ele is: 16 and popped ele is',heapq.heappushpop(Arr,16))   
                                    # here first push will perform and pop will perform
                                    # if small ele is pushed then it is at top and pop will pop the pushed ele itself.

print('printing array',Arr)


print('top 3 large elements',heapq.nlargest(3,Arr))       # returns list of top 3 max elements

print('printing array',Arr)

print('top 3 small elements',heapq.nsmallest(3,Arr))      # returns list of top 3 min elements

print('printing array',Arr)


my_list=[5,8,3,23,76,9,1]
heapq.heapify(my_list)             # builds heap in O(n) time, this method not present in java and present in cpp <algorithm>
print('min heap',my_list)


# maxheap
my_list=[5,8,3,23,76,9,1]
my_list=[-1*i for i in my_list]
heapq.heapify(my_list)
my_list=[-1*i for i in my_list]
print('max heap',my_list)



# OUTPUT:

# printing array [2, 10, 5, 20, 15, 14]
# the popped ele is: 2
# printing array [5, 10, 14, 20, 15]
# the popped ele is: 5
# printing array [10, 15, 14, 20]
# the pushed ele is: 16 and popped ele is 10
# printing array [14, 15, 16, 20]
# top 3 large elements [20, 16, 15]
# printing array [14, 15, 16, 20]
# top 3 small elements [14, 15, 16]
# printing array [14, 15, 16, 20]
# min heap [1, 8, 3, 23, 76, 9, 5]
# max heap [76, 23, 9, 5, 8, 3, 1]
