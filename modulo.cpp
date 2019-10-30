//
// Created by Flamingo Flamingo on 10/31/19.
//

#include "modulo.h"
#include "iostream"
using namespace std;
void Modulo::modulo1() {
    int nTest;
    cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        long x,y,p;
        cin >> x >> y >> p;

    }
}

void Modulo::modulo2() {
    int nTest;
    cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        int a,m;
        cin >> a >> m;
        for (int j = 0; j < m; ++j) {
            if (j*a%m == 1){
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
        long a,m;
        cin >> a >> m;
        long tmp=0;
        for (long j = 1; j <= a; ++j) {
            tmp= tmp+ j%m;
        }
        cout << tmp << endl;
    }
}

void Modulo::modulo4() {
    int nTest;
    cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        long a,m;
        cin >> a >> m;
        long tmp=0;
        for (long j = 1; j <= a; ++j) {
            tmp= tmp+ j%m;
        }
        if (tmp==m){
            cout << 1 << endl;
        } else{
            cout << 0 << endl;
        }
}
}
