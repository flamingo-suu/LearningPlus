//
// Created by Flamingo Flamingo on 10/26/19.
//

#include "lcmGcd.h"

long LcmGcd::gcd(long a, long b){
    while (a*b!=0){
        if (a>b){
            a%=b;
        } else{
            b%=a;
        }
    }
    return a+b;
}

long LcmGcd::lcm(long a, long b){
    return a*b/gcd(a,b);
}

void LcmGcd::lcmGcd1() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        long a,b;
        std::cin >> a >> b;
        std::cout << lcm(a,b) << gcd(a,b);
    }
}

void LcmGcd::lcmGcd2() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        long a;
        std::cin >> a;
        long temp = 1;
        for (long j = 2; j <= a; ++j) {
            temp = gcd(temp,j);
        }
        std::cout << temp << std::endl;
    }

}