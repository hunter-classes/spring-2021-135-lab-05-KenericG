#include <iostream>
#include "funcs.h"

bool isDivisibleBy(int n, int d){
    if (n%d == 0){
        return true;
    }
    else {
        return false;
    }
}

bool isPrime(int n){
    if (n <= 1){
        return false;
    }
    for (int i = 2; i != n; i++){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}

int nextPrime(int n){
    if (n%2 == 0){
        n++;
    }
    else {
        n+=2;
    }
    while(true){
        if (isPrime(n)){
            return n;
        }
        n+=2;
    }
}

int countPrimes(int a, int b){
    int i = 0;
    for(a = a; a <= b; a++){
        if (isPrime(a)){
            i++;
        }
    }
    return i;
}

bool isTwinPrime(int n){
    if (isPrime(n) == false){
        return false;
    }
    if (isPrime(n+2) == false && isPrime(n-2) == false){
        return false;
    }
    return true;
}

int nextTwinPrime(int n){
    if (n%2 == 0){
        n++;
    }
    else {
        n+=2;
    }
    while(true){
        if (isTwinPrime(n)){
            return n;
        }
        n+=2;
    }   
}

int largestTwinPrime(int a, int b){
    for (b = b; b >= a; b--){
        if (isTwinPrime(b)){
            return(b);
        }
    }
    return(-1);
}