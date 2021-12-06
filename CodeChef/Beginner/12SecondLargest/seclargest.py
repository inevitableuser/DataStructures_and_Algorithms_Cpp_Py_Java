class seclargest:
    def main(self):
        n = int(input())
        for i in range(n):
            a, b, c = map(int, input().split())
            if a >= b and a >= c:
                if b >= c:
                    print(b)
                else:
                    print(c)
            if b >= c and b >= a:
                if a >= c:
                    print(a)
                else:
                    print(c)
            if c >= a and c >= b:
                if a >= b:
                    print(a)
                else:
                    print(b)


if __name__ == "__main__":
    seclargest().main()
