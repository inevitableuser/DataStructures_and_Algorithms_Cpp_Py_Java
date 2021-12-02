class sumofdigits:
    def main(self):
        n=int(input())
        for i in range(n):
            x=input()
            sum=0
            for i in x:
                sum+=int(i)
            print(sum)

if __name__=="__main__":
    sumofdigits().main()