class smallfactorials:
    def fact(self, x):
        for i in range(2, x):
            x *= i
        return x

    def main(self):
        n = int(input())
        for i in range(n):
            x = int(input())
            print(self.fact(x))


if __name__ == "__main__":
    smallfactorials().main()
