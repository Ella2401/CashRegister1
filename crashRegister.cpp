Ella Manukyan(Java/ C++), [19.02.21 00:13]
#include <iostream>

int GiveMoney(int money, int bill) {
  int amount = 0;

  if ( money >= bill )
  {
    amount = money / bill;
    if (amount <= 5) {
      std::cout << bill;
      std::cout << " -> ";
      std::cout << amount << "\n";
    }
    else {
      amount = 5;
      std::cout << bill;
      std::cout << " -> ";
      std::cout << amount << "\n";
    }  
  }
  return money - amount * bill;
};

int main() {
  int amountOfMoneys = 5;

  int input = 0;
  std::cin >> input;

  int x = GiveMoney(input, 20000);
  x = GiveMoney(x, 10000);
  x = GiveMoney(x, 5000);
  x = GiveMoney(x, 2000);
  x = GiveMoney(x, 1000);
  
  if (x < 1000)
  {
    std::cout << " There Is Not Coin";
  }
  if (x >= 1000) {
    std::cout << "Money Is Not Enough";
  }
}
