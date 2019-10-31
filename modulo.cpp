//
// Created by Flamingo Flamingo on 10/31/19.
//

#include "modulo.h"
#include "iostream"
#include "algorithm"
#import "cmath"

using namespace std;

void Modulo::modulo1() {
    int nTest;
    cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        long x, y, p;
        cin >> x >> y >> p;

    }
}

void Modulo::modulo2() {
    int nTest;
    cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        int a, m;
        cin >> a >> m;
        for (int j = 0; j < m; ++j) {
            if (j * a % m == 1) {
                cout << j << endl;
                break;
            }
        }
    }
}

void Modulo::modulo3() {
    int nTest;
    cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        long a, m;
        cin >> a >> m;
        long tmp = 0;
        for (long j = 1; j <= a; ++j) {
            tmp = tmp + j % m;
        }
        cout << tmp << endl;
    }
}

void Modulo::modulo4() {
    int nTest;
    cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        long a, m;
        cin >> a >> m;
        long tmp = 0;
        for (long j = 1; j <= a; ++j) {
            tmp = tmp + j % m;
        }
        if (tmp == m) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}

int a[111];
int n, x;
bool ok = true;

void in() {
    for (int i = 0; i < n; ++i) {
        cout << a[i];
    }
    cout << endl;
}

void sinh() {
    int i = n;
    while (a[i] == 1) {
        i--;
    }
    if (i == 0) {
        ok = false;
    } else {
        a[i] = 1;
        for (int j = i + 1; j <= n; ++j) {
            a[j] = 0;
        }
    }
}

bool cmp(int m, int n) {
    int idxM = 0;
    int idxN = 0;
    int tmpX = m;
    int tmpY = n;
    while (tmpX > 0) {
        tmpX = tmpX / 10;
        idxM++;
    }
    while (tmpY > 0) {
        tmpY = tmpY / 10;
        idxN++;
    }
    return m * pow(10, idxN) + n > m + n * pow(10, idxM) != 0;
}

void Modulo::combi1() {
    n = 8;
    a[0] = 1;
    a[1] = 34;
    a[2] = 3;
    a[3] = 98;
    a[4] = 9;
    a[5] = 76;
    a[6] = 45;
    a[7] = 4;


//    a[5]= 5;
//    a[6]= 6;
    sort(a, a + n, cmp);
    in();
//    while (ok){
//        in();
//        sinh();
//    }
}
