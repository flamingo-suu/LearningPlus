//
// Created by Flamingo Flamingo on 10/26/19.
//

#include "prime.h"
#include "lcmGcd.h"

Prime::Prime() {
    for (int i = 2; i < 100000; ++i) {
        if (isPrime(i)){
            primes.push_back(i);
        }
    }
}

bool Prime::isPrime(long n){
    if(n<2) return false;
    if (n == 2 || n == 3) return true;
    if (n%2 == 0 || n%3 == 0) return false;
    long sq = sqrt(n);
    for (long i = 5; i <= sq; i+=6) {
        if (n%i == 0  || n%(i+2)==0) return false;
    }
    return true;
}

void Prime::prime1() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        long n;
        std::cin >> n;
        long demPrime1=0;
        for (long j = 2; j <=n/2 ; ++j) {
            if (n%j == 0 && isPrime(j))
            {
                demPrime1++;
                std::cout << j << " ";
            }
        }
        if (demPrime1==0){
            std::cout << n;
        }
        std::cout << std::endl;
    }
}

void Prime::prime2() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        long n;
        std::cin >> n;
        long maxPrime2 = 0;
        for (long j = 2; j <=n/2 ; ++j) {
            if (n%j == 0 && isPrime(j))
            {
                maxPrime2 = j;
            }
        }
        if (maxPrime2 ==0){
            std::cout << n;
        } else{
            std::cout << maxPrime2;
        }
        std::cout << std::endl;
    }
}

void Prime::prime3() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        long n;
        std::cin >> n;
        if (n < 2){
            return;
        } else if (n==2){
            std::cout << n;
            return;
        }
        std::cout << 2 << " ";
        for (long j = 3; j <=n ; j+=2) {
            if (isPrime(j)){
                std::cout << j << " ";
            }
        }
        std::cout << std::endl;
    }
}

void Prime::prime4() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        int n;
        std::cin >> n;
        int res[n+1];
        bool kt[n+1];
        memset(res, 0, sizeof(res));
        memset(kt, false, sizeof(kt));
        for (int j = 1; j <= n; ++j) {
            if(j==1){
                res[1] = 1;
            } else{
                if (res[j] == 0 && !kt[j]){
                    for (int k = j; k <= n; k+=j) {
                        if (!kt[k]){
                            res[k] = j;
                            kt[k] = true;
                        }
                    }
                }
            }
        }
        for (int l = 1; l <= n; ++l) {
            std::cout << res[l] << " ";
        }
    }
}

void Prime::prime5() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        int m,n;
        std::cin>> m >> n;
        for (int j = m; j <= n; ++j) {
            if (isPrime(j)){
                std::cout << j << " ";
            }
        }
    }
}

void Prime::prime6() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        int n;
        std::cin >> n;
        int tmp=0;
        while (primes[tmp] <= n){
            if (isPrime(n-primes[tmp])){
                std::cout << primes[tmp] << " " << n-primes[tmp] << std::endl;
                break;
            }
            tmp++;
        }
    }
}

void Prime::prime7() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        int n;
        std::cin >> n;

    }
}

void Prime::prime8() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        int n,p;
        std::cin >> n >> p;
        int tmp=1;
        int res=0;
        while (pow(p,tmp)<=n){
            res = res+ n/(pow(p,tmp));
            tmp++;
        }
        std::cout << res << std::endl;
    }
}

void Prime::prime9() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        int n;
        std::cin >> n;
        int tmp=0;
        while (n>1){
            int idx=0;
            if (n%primes[tmp]==0){
                std::cout << primes[tmp];
            }
            while (n%primes[tmp]==0){
                n = n/primes[tmp];
                idx++;
            }
            if (idx > 0){
                std::cout << " " << idx << " ";
            }
            tmp++;
        }
        std::cout << std::endl;
    }
}

void Prime::prime10() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        int n;
        std::cin >> n;
        int nt = n;
        int kt = 0;
        while (nt>0){
            kt = kt+nt%10;
            nt=nt/10;
        }
        int tmp=0;
        int kt2 = 0;
        while (n>1){
            while (n%primes[tmp]==0){
                n = n/primes[tmp];
                kt2=kt2+primes[tmp];
            }
            tmp++;
        }
        if (kt==kt2){
            std::cout << "YES";
        } else{
            std::cout << "NO";
        }
        std::cout << std::endl;
    }

}

void Prime::prime11() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        long n;
        std::cin >> n;
        long res=0;
        for (long j = 1; j <=n/2 ; ++j) {
            if (n%j==0){
                res = res+j;
            }
        }
        if (res == n){
            std::cout << 1 << std::endl;
        } else{
            std::cout << 0 << std::endl;
        }

    }
}

void Prime::prime12() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        int n,k;
        std::cin >> n >> k;
        int kq[100];
        int tmp=0;
        int idx=0;
        memset(kq,0, sizeof(kq));
        while (n>1){
            while (n%primes[tmp]==0){
                n=n/primes[tmp];
                kq[idx] = primes[tmp];
                idx++;
            }
            tmp++;
        }
        if (k <= idx){
            std::cout << kq[k-1] << std::endl;
        } else{
            std::cout << -1 << std::endl;
        }
    }
}

void Prime::prime13() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        long n;
        std::cin >> n;
        long res=0;
        for (long j = 1; j <=n/2 ; ++j) {
            if (n%j==0){
                res = res+j;
            }
        }
        if (res == n){
            std::cout << 1 << std::endl;
        } else{
            std::cout << 0 << std::endl;
        }

    }
}

void Prime::prime14() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        int n;
        std::cin >> n;
        int tmp=0;
        while (pow(primes[tmp],2) <=n){
            std::cout << pow(primes[tmp],2) << " ";
            tmp++;
        }
        std::cout << std::endl;
    }
}

void Prime::prime15() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        long n;
        std::cin >> n;
        long res=0;
        for (long j = 1; j <=n/2 ; ++j) {
            if (n%j==0){
                res = res+j;
            }
        }
        if (res == n){
            std::cout << 1 << std::endl;
        } else{
            std::cout << 0 << std::endl;
        }

    }
}

void Prime::prime16() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        int n;
        std::cin >> n;
        int tmp=0;
        while (pow(primes[tmp],2) <=n){
                tmp++;
        }
        std::cout << tmp << std::endl;
    }
}

void Prime::prime17() {
    int nTest;
    std::cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        int m,n;
        std::cin >> m >>  n;
        int tmp=0;
        while (pow(primes[tmp],2) <=n){
            if (pow(primes[tmp],2) >=m){
                tmp++;
            }
        }
        std::cout << tmp << std::endl;
    }
}

void Prime::prime18() {
    int nTest;
    std::cin >> nTest;
    LcmGcd lcmGcd;
    for (int i = 0; i < nTest; ++i) {
        int m,n,a,b;
        std::cin >> m >> n>> a>>b;
        long x = m/a + m/b - m/(lcmGcd.lcm(a,b));
        long y = n/a + n/b - n/(lcmGcd.lcm(a,b));
        std::cout << y-x << std::endl;
    }
}
