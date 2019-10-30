//
// Created by Flamingo Flamingo on 10/31/19.
//

#include "fibonaci.h"
#include "iostream"
#define M 1000000007

using namespace std;

Fibonaci::Fibonaci() {
    F[0]=0;
    F[1]=1;
    for (int i = 2; i < 1000; ++i) {
        F[i] = F[i-1]%M + F[i-2]%M;
    }
}

void Fibonaci::fibonaci1() {
    int nTest;
    cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        int n;
        cin >> n;
        cout << F[n];
    }
}

void Fibonaci::fibonaci2() {
    int nTest;
    cin >> nTest;
    for (int i = 0; i < nTest; ++i) {
        int n;
        cin >> n;
        int tmp=0;
        bool check= false;
        while (F[tmp] <= n){
            if (F[tmp] == n){
                check = true;
                break;
            }
            tmp++;
        }
        if (check){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
}
