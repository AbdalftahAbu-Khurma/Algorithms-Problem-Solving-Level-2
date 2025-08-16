#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int ReverseNumbers(int Number) {
    int Remainder = 0, Number2 = 0;
    while (Number > 0) {
        Remainder = Number % 10;
        Number /= 10;
        Number2 = Number2 * 10 + Remainder;
    }
    return Number2;
}

bool IsPalindrome(int Number) {
    return Number == ReverseNumbers(Number);
}

int main() {
  if (IsPalindrome(ReverseNumbers(ReadPositiveNumber("Pleas enter a positie Number ?")))) 
  cout << "\n  Yes , it is a Palindrome number \n";  
 else 
  cout << "\n  No , it is NOT a Palindrome number \n"; 
    return 0;
}
