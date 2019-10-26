//
// Created by Flamingo Flamingo on 10/26/19.
//

#include "lcmGcd.h"

long lcm(long a, long b){
    while (a*b!=0){
        if (a>b){
            a%=b;
        } else{
            b%=a;
        }
    }
    return a+b;
}

long gcd(long a, long b){
    return a*b/lcm(a,b);
}

long gcdArray(long a) {
    long temp = 1;
    for (long i = 2; i <= a; ++i) {
        temp = gcd(temp,i);
    }
    return temp;
}
