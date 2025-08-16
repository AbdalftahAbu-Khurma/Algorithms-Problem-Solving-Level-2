#include <iostream>
#include <cmath>
using namespace std;
 
enum enPrimNotPrime { Prime = 1, NotPrime = 2 };
 
int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
 
enPrimNotPrime CheckPrime(int Number) {
    int M = round(Number / 2);
    for (int Counter = 2; Counter <= M; Counter++) {
        if (Number % Counter == 0)
            return enPrimNotPrime::NotPrime;
    }
    return enPrimNotPrime::Prime;
}
 
void PrintPrimeNumbersFrom1ToNumber(int Number) {
    cout << "\n Prime Numbers from 1 To " << Number << " are : \n";
    for (int i = 1; i <= Number; i++) {
        if (CheckPrime(i) == enPrimNotPrime::Prime)
            cout << i << endl;
    }
}
 
int main() {
    PrintPrimeNumbersFrom1ToNumber(ReadPositiveNumber("Please enter a positive number: "));
    return 0;
}