#include<iostream>
using namespace std;

// void -> return nothing
void sayMyName(){ // declaration and defination
    cout << "vdk.codes" << endl;
}

// n -> input parameter
void multiplicationTable(int n){
    for(int i = 1; i <= 10; i++){
        cout << n*i << endl;
    }
}

bool isPrime(int n){
    for(int i = 2; i <= n-1; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void printEvenInsideRange(int start, int end){
    for(int i = start; i <= end; i++){
        if((i%2) == 0) {
            cout << i << " ";
        }
    }
}

void solve(int a){
    a++;
    a++;
    cout << a << endl;
    a++;
}

void solve2(int &number){
    number = number / 2;
    return;
}

int main(){
    //function use -> function call
    // sayMyName();

    // 5 -> argument
    // multiplicationTable(5);

    /*
    bool checkPrime = isPrime(19);
    if(checkPrime == true){
        cout << "Prime number" << endl;
    } else {
        cout << "Not prime";
    }
    */

    // printEvenInsideRange(55, 100);

    // Pass by value 
    /*
    int a = 5;
    a++;
    solve(a);
    a++;
    cout << a << endl;
    */

    // Pass by reference 
    /*
    int age = 15;
    cout << age << endl;

    int &demo = age;
    cout << demo << endl;

    age++;
    cout << demo << endl;
    */

    int val = 10;
    solve2(val);
    val = val + 100;
    cout << val << endl;
    


    return 0;
}