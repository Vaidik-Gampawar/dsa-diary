#include<iostream>
using namespace std;

void printCounting() {
    for(int i = 1; i <= 100; i++){
        cout << i << " ";
    }
    cout << endl;
}

int simpleInterest(int p, int r, int t){
    int si = (p * r * t) / 100;
    return si;
}

bool isPrime(int n) {
    if (n < 2) return false;          // 0 and 1 are not prime

    for (int i = 2; i < n; i++) {     // check divisors
        if (n % i == 0) {             // divisible → not prime
            return false;
        }
    }
    return true;                      // no divisors → prime
}

void printPrimes() {
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void checkElgibility(int age){
    if(age >= 18) {
        cout << "You are eligibile to vote." << endl;;
    } else {
        cout << "You're not eligible." << endl;;
    }
}



int main() {
    checkElgibility(19);
    printPrimes();
    printCounting();
    
    return 0;
}