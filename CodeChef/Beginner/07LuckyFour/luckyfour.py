class luckyfour:
    def main(self):
        n = int(input())
        for i in range(n):
            x = input()
            print(x.count('4'))


if __name__ == "__main__":
    luckyfour().main()
