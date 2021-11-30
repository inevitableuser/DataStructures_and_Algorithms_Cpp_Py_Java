#include <bits/stdc++.h>
using namespace std;
int main() {

  int withdraw_amt;
  double acc_bal;
  double atm_charge = 0.50;

  cin >> withdraw_amt;
  cin >> acc_bal;

  double final_debit = withdraw_amt + atm_charge;
  if (withdraw_amt % 5 == 0) {
    if (final_debit <= acc_bal) {
      acc_bal = acc_bal - final_debit;
    }
  }
  // cout << fixed;
  // cout << setprecision(2);
  cout << acc_bal << endl;
}