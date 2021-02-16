#include <iostream>
using namespace std;

int main() {
  const int SECRET = 7;

  string answer;
  cout << "Guess the secret number:\n";
  cin >> answer;

  while (answer != "7")
  {
    cout << "Incorrect! Try again:\n";
    cout << "Guess the secret number:\n";
    cin >> answer;
  }

  cout << "Congratulations!\n";
  

}