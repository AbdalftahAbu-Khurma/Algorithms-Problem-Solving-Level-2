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
 
int PrintSumOfDigits(int Number) {
    int Sum = 0, Remainder = 0;
    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        Sum = Sum + Remainder;
    }
    return Sum;
}
 
int main() {
    cout << "\n Sum Of Digits = "
         << PrintSumOfDigits(ReadPositiveNumber("Please enter a positive Number: "))
         << endl;
    return 0;
}