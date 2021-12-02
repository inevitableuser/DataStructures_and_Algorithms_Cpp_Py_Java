class firstandlast:
    def main(self):
        n = int(input())
        for i in range(n):
            x = input()
            print(int(x[0])+int(x[-1]))


if __name__ == "__main__":
    firstandlast().main()
