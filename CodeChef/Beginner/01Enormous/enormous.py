class main:
    def main():
        x,y=map(int,input().split())
        count=0
        for i in range(x):
            z=int(input())
            if z%y==0:
                count+=1
        print(count)
    if __name__=="__main__":
        main()
