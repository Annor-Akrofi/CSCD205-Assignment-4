#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int firstnumber; 
    int secondnumber;

    cout << "Enter first gcd number you want to find "<<endl;
    cin >> firstnumber;
    cout << "Enter second gcd number number you want to find "<<endl;
    cin >> secondnumber;

    cout << "The greatest Greatest Common Divisor for the two number is  " << gcd(abs(firstnumber), abs(secondnumber)) << endl;
}
