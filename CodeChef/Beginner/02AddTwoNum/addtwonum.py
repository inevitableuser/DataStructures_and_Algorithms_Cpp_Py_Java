class Main:
    def main(self):
        n=int(input())
        for i in range(n):
            a,b=map(int,input().split())
            print(a+b)
if __name__=="__main__":
    Main().main()