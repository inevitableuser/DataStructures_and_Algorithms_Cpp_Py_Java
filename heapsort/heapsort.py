import heapq

class Main:
    def sort(self,Arr):
        li=[]
        for i in range(len(Arr)):
            li.append(heapq.heappop(Arr))
        return li

    def main(self):
        Arr=[int(i) for i in input("Enter your Array: ").split()]
        heapq.heapify(Arr)
        main=Main()
        Arr=self.sort(Arr)
        print("Array after heap sort:",' '.join([str(i) for i in Arr]))

if __name__=="__main__":
    Main().main()




# OUTPUT:

# Enter your Array: 7 90 45 2 48 1
# Array after heap sort: 1 2 7 45 48 90