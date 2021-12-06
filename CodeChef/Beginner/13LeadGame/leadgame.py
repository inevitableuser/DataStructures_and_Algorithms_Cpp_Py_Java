class leadgame:
    def main(self):
        n = int(input())
        p1, p2, maxx = 0, 0, 0
        for i in range(n):
            a, b = map(int, input().split())
            p1 += a
            p2 += b
            if p1 >= p2 and p1-p2 > maxx:
                maxx = p1-p2
                winner = 1
            elif p1 <= p2 and p2-p1 > maxx:
                maxx = p2-p1
                winner = 2
        print(winner, maxx)


if __name__ == "__main__":
    leadgame().main()
