//
// Created by Flamingo Flamingo on 10/26/19.
//

#include "prime.h"

bool isPrime(long n){
    if(n<2) return false;
    if (n == 2 || n == 3) return true;
    long sq = sqrt(n);
    for (long i = 2; i <= sq; ++i) {
        if (n%i == 0) return false;
    }
    return true;
}