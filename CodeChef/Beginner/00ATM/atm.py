def main():
    withdraw,balance=map(str,input().split())
    withdraw=int(withdraw)
    balance=float(balance)
    debit=withdraw+0.50
    if withdraw%5==0 and debit<=balance:
        balance-=debit
    print(balance)

if __name__=="__main__":
    main()

