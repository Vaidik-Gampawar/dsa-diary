#include<iostream>
using namespace std;

bool checkPrime(int N){
    if(N <= 1) {
        return false;
    }

    for(int i = 2; i < N; i++){
        if(N%i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    cout << "Enter value of n : " << endl;
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        bool isPrime = checkPrime(i);

        if(isPrime){
            cout << i << endl;
        }
    }
}