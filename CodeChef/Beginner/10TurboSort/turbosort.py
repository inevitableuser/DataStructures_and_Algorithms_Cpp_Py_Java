class turbosort:
    def main(self):
        n = int(input())
        li = []
        for i in range(n):
            li.append(int(input()))
        li = [str(i) for i in sorted(li)]
        print("\n".join(li))


if __name__ == "__main__":
    turbosort().main()
