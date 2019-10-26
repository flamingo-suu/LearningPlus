#include "iostream"
#include "prime.h"
#include "lcmGcd.h"
using namespace std;

int main() {
    cout << lcm(14,8) << endl;
    cout << gcd(14,8) << endl;
    cout << gcdArray(3);
    return 0;
}
